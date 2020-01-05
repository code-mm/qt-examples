#include "plugin.h"

Plugin::Plugin()
{

}

QString Plugin::getName() const
{
    return name;
}

void Plugin::setName(const QString &value)
{
    name = value;
}

QString Plugin::getPath() const
{
    return path;
}

void Plugin::setPath(const QString &value)
{
    path = value;
}

QString Plugin::getVersionName() const
{
    return versionName;
}

void Plugin::setVersionName(const QString &value)
{
    versionName = value;
}

int Plugin::getVersionCode() const
{
    return versionCode;
}

void Plugin::setVersionCode(int value)
{
    versionCode = value;
}

QString Plugin::getDesc() const
{
    return desc;
}

void Plugin::setDesc(const QString &value)
{
    desc = value;
}

QString Plugin::getIconLocal() const
{
    return iconLocal;
}

void Plugin::setIconLocal(const QString &value)
{
    iconLocal = value;
}

QString Plugin::getIconRemotely() const
{
    return iconRemotely;
}

void Plugin::setIconRemotely(const QString &value)
{
    iconRemotely = value;
}

QDate Plugin::getLasterUpdateDate() const
{
    return lasterUpdateDate;
}

void Plugin::setLasterUpdateDate(const QDate &value)
{
    lasterUpdateDate = value;
}

QString Plugin::getStatis() const
{
    return statis;
}

void Plugin::setStatis(const QString &value)
{
    statis = value;
}

bool Plugin::getForceUpdate() const
{
    return forceUpdate;
}

void Plugin::setForceUpdate(bool value)
{
    forceUpdate = value;
}

bool Plugin::getEnable() const
{
    return enable;
}

void Plugin::setEnable(bool value)
{
    enable = value;
}

QString Plugin::getAuthor() const
{
    return author;
}

void Plugin::setAuthor(const QString &value)
{
    author = value;
}
