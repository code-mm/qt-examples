#ifndef MYLISTMODEL_H
#define MYLISTMODEL_H

#include<QAbstractListModel>

class MyListModel : public QAbstractListModel
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

    AppRoom *getAppRoom() const;
    void setAppRoom(AppRoom *value);

    QMatrixClient::Room *getRoom() const;
    void setRoom(QMatrixClient::Room *value);

protected:

    QHash<int, QByteArray> roleNames() const;

public slots:

    // 新消息通知
    void aboutToAddNewMessages(QMatrixClient::RoomEventsRange events);

private:
    QList<Message> mMessageList;

    AppRoom *appRoom;

    QMatrixClient::Room *room;


};

#endif // MYLISTMODEL_H
