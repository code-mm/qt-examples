#include "qmlpluginimpl.h"

void QmlPlugin::LoaderPlugin()
{
    engine.load(QUrl(QLatin1String("qrc:/plugin.qml")));
}

void LoaderPluginApp()
{
    QmlPlugin *qmPlugin = new QmlPlugin;
    qmPlugin->LoaderPlugin();
}
