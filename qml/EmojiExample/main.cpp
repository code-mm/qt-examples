#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "emojimodel.h"
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);


    qmlRegisterType<EmojiModel>("EmojiModel", 0, 1, "EmojiModel");


    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);
    engine.load(url);



//    EmojiModel *emoji = new EmojiModel();

//    engine.rootContext()->setContextProperty("emoji",emoji);





    return app.exec();
}
