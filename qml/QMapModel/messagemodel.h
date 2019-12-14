#ifndef MESSAGEMODEL_H
#define MESSAGEMODEL_H

#include <QAbstractTableModel>
#include <QHash>
#include <QByteArray>

#include <iostream>

#include "message.h"

class MessageModel : public QAbstractListModel
{
    Q_OBJECT
public:
    MessageModel();
    enum MessageRoles
    {
        ROOMID =Qt::UserRole + 1,
        SENDER,
        MESSAGE ,
        TYPE,
        DATETIME,
        ISME,
        ISREAD,
        ISMESSAGESENDSUCCESS
    };


    void addMessage(const Message &message);

    int rowCount(const QModelIndex &parent = QModelIndex()) const;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const;

    Q_INVOKABLE void insert(QString message);



protected:

    QHash<int, QByteArray> roleNames() const;

public slots:



private:
    QList<Message> mMessageList;

};

#endif // MESSAGEMODEL_H
