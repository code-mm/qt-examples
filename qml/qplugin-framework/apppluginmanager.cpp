#include "apppluginmanager.h"

AppPluginManager *AppPluginManager::instance=nullptr;
AppPluginManager::AppPluginManager()
{
    pluginsPath = qApp->applicationDirPath()+"/plugins";

    qDebug()<<"插件目录:"<<pluginsPath;

    pluginsDir = new QDir(pluginsPath);

    if(!pluginsDir->exists())
    {
        qDebug()<<"插件目录不存在:"<<pluginsPath;
        pluginsDir->mkdir(pluginsPath);
    }
    else
    {
        qDebug()<<"插件目录已经存:"<<pluginsPath;
    }

    scanLocalPlugin();
}

void AppPluginManager::scanLocalPlugin()
{

    qDebug()<<"扫描本地安装插件";

    QDir dir(pluginsPath);
    QStringList nameFilters;
    nameFilters << "*";
    QStringList files = dir.entryList(nameFilters, QDir::Files|QDir::Readable, QDir::Name);


    for(QString it : files)
    {
        qDebug()<<" 目录下文件 :" << it;
    }

    qDebug()<<" ---------- " ;

    for(QString it : files)
    {
        // 检查是否为插件
        if (checkQLibrary(it))
        {
            qDebug()<<" 已经安装插件 :" << it;

            QPluginLoader *loader = new QPluginLoader(it);
            QJsonObject json = loader->metaData().value("MetaData").toObject();

            Plugin *plugin = new Plugin();

            QString name =  json.value("name").toString();
            int versionCode =  json.value("versionCode").toInt();
            QString versionName =  json.value("versionName").toString();
            QString desc =  json.value("desc").toString();

            plugin->setName(name);
            plugin->setDesc(desc);
            plugin->setVersionCode(versionCode);
            plugin->setVersionName(versionName);

        }
    }
}

bool AppPluginManager::checkQLibrary(QString path)
{
    return QLibrary::isLibrary(path);
}

bool AppPluginManager::isMePlugin()
{

}

void AppPluginManager::loader(Plugin *plugin)
{
    QPluginLoader *loader = new QPluginLoader(plugin->getPath());

    if(loader->load())
    {

        IAppPluginInterface *plugin = qobject_cast<IAppPluginInterface *>(loader->instance());

        if (plugin)
        {
            plugin->loader();

        }
        else
        {
            delete loader;
            loader = Q_NULLPTR;
        }


    }




}

QList<Plugin *> AppPluginManager::getQListPlugins() const
{
    return qListPlugins;
}

AppPluginManager *AppPluginManager::getInstance()
{
    if(instance==nullptr)
    {
        instance = new AppPluginManager();
    }
    return instance;
}
