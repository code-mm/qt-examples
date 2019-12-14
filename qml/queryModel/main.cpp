#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "customsqlmodel.h"
#include "../connection.h"
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);
    if (!createConnection())
        return EXIT_FAILURE;

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);
    engine.load(url);


    CustomSqlModel *model = new CustomSqlModel();

    engine.rootContext()->setContextProperty("model",model);




    return app.exec();
}
