#ifndef QMLPLUGINFRAMEWORK_H
#define QMLPLUGINFRAMEWORK_H

#include "QObject"
#include "QString"
#include "QDate"

#define OSX = 0
#define LINUX = 1
#define WINDOWS = 2




class QmlPluginFramework : public QObject
{
    Q_OBJECT
public:
    //构造函数和析构函数
    QmlPluginFramework();
    ~QmlPluginFramework();

    //加载插件 插件名称，插件函数名
    Q_INVOKABLE void loaderPlugin(QString pluginName,QString funcName);

    // 设置插件名称
    void  setPluginName(QString name);

private:
    // 插件文件夹路径
    QString pluginsDir;
    // 插件名称
    QString pluginName;
    // 插件路径
    QString pluginPath;
    // 插件版本
    QString pluginVersionName;
    // 插件版本号
    QString pluginVersionCode;
    // 是否启用
    bool enable;
    // 插件描述
    QString description;
    // 更新说明
    QString  updateDescription;
    // 最后更新日期
    QDate lasterUpdateData;
    // 插件大小
    int size;

    // 支持平台 true false
    // macos linux windows
    bool supportPlatform[3];

};



#endif // QMLPLUGINFRAMEWORK_H
