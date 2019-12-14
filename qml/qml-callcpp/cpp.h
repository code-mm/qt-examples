#ifndef CPP_H
#define CPP_H

#include <QObject>

#include <QString>

#include <QDebug>

class Cpp :public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString msg READ readMsg  NOTIFY signalsMsg)
public:
    Cpp();
    Q_INVOKABLE void sendMsg(QString msg);
    QString readMsg();


public slots :

    void slotsMsg(QString msg);

    void slotsMsg();


signals :

    void signalsMsg(QString msg);

private :

    QString mMsg;

};

#endif // CPP_H
