#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "qmlpluginframework.h"
#include <QQmlContext>
#include <QtGlobal>
#include <QDebug>
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlApplicationEngine engine;
    // 创建插件框架
    QmlPluginFramework qmlPluginFramework;
    // 设置插件名称

#ifdef Q_OS_MAC
    // mac
    qDebug()<<"MacOS";

 qmlPluginFramework.setPluginName("libimpl.1.0.0.dylib");


#endif

#ifdef Q_OS_LINUX
    // linux
    qDebug()<<"Linux";
 qmlPluginFramework.setPluginName("libqmlPlugin_debug.so");
#endif

#ifdef Q_OS_WIN32
    // win
    qDebug()<<"Windows";

 qmlPluginFramework.setPluginName("libqmlPlugin_debug.dll");
#endif
    //
    engine.rootContext()->setContextProperty("qmlPluginFramework", &qmlPluginFramework);
    //
    engine.load(QUrl(QLatin1String("qrc:/main.qml")));

    return app.exec();
}
