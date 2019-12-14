#include "qmlpluginframework.h"
#include "QDebug"
#include <QLibrary>
#include <QDebug>
#include <QCoreApplication>
#include <iostream>
#include  <QDir>

QmlPluginFramework::QmlPluginFramework()
{
    // 初始化插件目录
    this->pluginsDir=QString::fromStdString( QCoreApplication::applicationDirPath().toStdString())+"/plugins/QmlPlugin/";
    // 启用插件
    this->enable=true;

    // 检查目录是否存在，若不存在则新建
    QDir dir;
    if (!dir.exists(pluginsDir))
    {
        bool res = dir.mkpath(pluginsDir);
        qDebug() << "插件目录创建成功" << res;
    }
}

QmlPluginFramework::~QmlPluginFramework(){

}

void QmlPluginFramework::setPluginName(QString name)
{
    this->pluginName=name;
    this->pluginPath=this->pluginsDir+ this->pluginName;
}


void QmlPluginFramework::loaderPlugin(QString pluginName,QString funcName)
{
    // 函数指针
    typedef void(*LOADER)();
    std::cout << this->pluginsDir.toStdString()+this->pluginName.toStdString()<<std::endl;
    QLibrary lib(this->pluginPath);
    if (lib.load())
    {
        LOADER ploader = (LOADER)lib.resolve(funcName.toUtf8());
        if (ploader)
        {
            ploader();
        }
        else
        {
            qDebug() << "fun error";
        }
    }
    else
    {
        qDebug() << "load error"<<lib.errorString();
    }
}


