#ifndef APPPLUGINMANAGER_H
#define APPPLUGINMANAGER_H

#include <QObject>
#include <QObject>
#include <QPluginLoader>
#include <QVariant>
#include <QDir>
#include <QCoreApplication>
#include <QDebug>
#include "plugin.h"
#include "iappplugininterface.h"
class AppPluginManager : public QObject
{
    Q_OBJECT
public:
    // 获取实例
    static AppPluginManager* getInstance();
    // 获取插件加载器
    QList<Plugin *> getQListPlugins() const;
    // 加载插件
    void loader(Plugin *plugin);

private :
    // 私有构造函数
    AppPluginManager();
    // 单实例
    static AppPluginManager *instance;
    // 插件目录
    QDir *pluginsDir;
    // 插件目录字符串
    QString pluginsPath;
    // 所有的插件集合
    QList<Plugin*> qListPlugins;
    // 扫描本地已有插件
    void  scanLocalPlugin();
    // 检查是否为插件
    bool checkQLibrary(QString path);
    // 检查是否为自己的插件，防止外部注入
    bool isMePlugin();

public slots:



};

#endif // APPPLUGINMANAGER_H
