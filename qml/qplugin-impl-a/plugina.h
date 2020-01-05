#ifndef PLUGINA_H
#define PLUGINA_H
#include "IAppPluginInterface.h"
#include <QObject>
#include <QPluginMetaData>
#include <QJsonDocument>
#include <QObject>

class PluginA : public QObject, public IAppPluginInterface
{
public:
    PluginA();

public slots:

    void receiveMessage(QString);


signals:
    void sendMessage(QString);
public:

    void instance() override;

    QString name();
    QString path();
    QString versionName();
    int versionCode();
    QString desc();
    QString iconLocal();
    QString iconRemotely();
    QDate lasterUpdateDate();
    QString statis();
    bool forceUpdate();
    bool enable();
    QString author();
};

#endif // PLUGINA_H
