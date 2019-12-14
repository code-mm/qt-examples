#ifndef CPP1_H
#define CPP1_H

#include <QObject>
#include <QString>
#include <QDebug>


class Cpp1 : public QObject
{
    Q_OBJECT
public:
    Cpp1();

public slots:

    QString slotsMsg(QString msg);

signals:

    void signalsMsg(QString msg);

};

#endif // CPP1_H
