#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "cpp.h"
#include "cpp1.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);
//    qmlRegisterType<Cpp>("Cpp", 1, 0, "Cpp");
//    qmlRegisterType<Cpp1>("Cpp1", 1, 0, "Cpp1");
    QGuiApplication app(argc, argv);


    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);
    engine.load(url);


    Cpp1 *cpp = new Cpp1();


    engine.rootContext()->setContextProperty("cpp",cpp);







    return app.exec();
}
