#pragma once

#ifndef IAPPPLUGININTER_H
#define IAPPPLUGININTER_H


#include <QString>
#include <QDate>

// 插件接口
class IAppPluginInterface{


public :

    virtual ~IAppPluginInterface() {}
    // 接收消息
    virtual void receiveMessage(QString) = 0;
    // 发送消息
    virtual void sendMessage(QString)   = 0;
    // 插件名称
    virtual QString name()=0;
    // 插件位置
    virtual QString path()=0;
    // 插件版本名称
    virtual QString versionName()=0;
    // 插件版本号
    virtual int versionCode()=0;
    // 插件描述
    virtual QString desc()=0;
    // icon 本地地址
    virtual QString iconLocal()=0;
    // icon 远程地址
    virtual QString iconRemotely()=0;
    // 最后更新时间
    virtual QDate lasterUpdateDate()=0;
    // dev  release test
    virtual QString statis()=0;
    // 是否强制跟新
    virtual bool forceUpdate()=0;
    // 是否启用
    virtual  bool enable()=0;
    // 作者
    virtual QString author();

    // 加载插件
    virtual void loader();
};

#endif // IAPPPLUGININTER_H
