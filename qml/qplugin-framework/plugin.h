#ifndef PLUGIN_H
#define PLUGIN_H
#include <QString>
#include <QDate>

class Plugin
{
public:
    Plugin();

    QString getName() const;
    void setName(const QString &value);

    QString getPath() const;
    void setPath(const QString &value);

    QString getVersionName() const;
    void setVersionName(const QString &value);

    int getVersionCode() const;
    void setVersionCode(int value);

    QString getDesc() const;
    void setDesc(const QString &value);

    QString getIconLocal() const;
    void setIconLocal(const QString &value);

    QString getIconRemotely() const;
    void setIconRemotely(const QString &value);

    QDate getLasterUpdateDate() const;
    void setLasterUpdateDate(const QDate &value);

    QString getStatis() const;
    void setStatis(const QString &value);

    bool getForceUpdate() const;
    void setForceUpdate(bool value);

    bool getEnable() const;
    void setEnable(bool value);

    QString getAuthor() const;
    void setAuthor(const QString &value);

private:
    // 插件名称
    QString name;
    // 插件位置
    QString path;
    // 插件版本名称
    QString versionName;
    // 插件版本号
    int versionCode;
    // 插件描述
    QString desc;
    // icon 本地地址
    QString iconLocal;
    // icon 远程地址
    QString iconRemotely;
    // 最后更新时间
    QDate lasterUpdateDate;
    // dev  release test
    QString statis;
    // 是否强制跟新
    bool forceUpdate;
    // 是否启用
    bool enable;
    // 作者
    QString author;
};

#endif // PLUGIN_H
