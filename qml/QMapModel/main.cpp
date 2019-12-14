#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include <QMap>
#include <QString>

#include "message.h"
#include "messagemodel.h"

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    const QUrl url(QStringLiteral("qrc:/main.qml"));
    QObject::connect(&engine, &QQmlApplicationEngine::objectCreated,
        &app, [url](QObject *obj, const QUrl &objUrl) {
            if (!obj && url == objUrl)
                QCoreApplication::exit(-1);
        }, Qt::QueuedConnection);


    MessageModel messageModel;
    for(int i=0;i<10;i++)
    {
        Message message;
        message.setMessage("Hahaha");
        messageModel.addMessage(message);
    }

    engine.rootContext()->setContextProperty("messageModel",&messageModel);

    engine.load(url);

    return app.exec();
}
