#include "messagemodel.h"




MessageModel::MessageModel()
{

}

void MessageModel::addMessage(const Message &message)
{
    beginInsertRows(QModelIndex(), rowCount(), rowCount());
    mMessageList << message;
    endInsertRows();
}

int MessageModel::rowCount(const QModelIndex &parent) const
{
    Q_UNUSED(parent);
    mMessageList.count();
}

QVariant MessageModel::data(const QModelIndex &index, int role) const
{
    if (index.row() < 0 || index.row() >= mMessageList.count())
        return QVariant();

    const Message &message = mMessageList[index.row()];
    if (role == ROOMID)
        return message.getRoomid();
    else if (role == SENDER)
        return message.getSender();
    else if (role == MESSAGE)
        return message.getMessage();
    else if (role == TYPE)
        return message.getType();
    else if (role == DATETIME)
        return message.getDateTime();
    else if (role == ISME)
        return message.getIsMe();
    else if (role == ISREAD)
        return message.getIsRead();
    else if (role == ISMESSAGESENDSUCCESS)
        return message.getIsMessageSendSuccess();
    return QVariant();
}

void MessageModel::insert(QString message)
{
    Message msg;
    msg.setMessage(message);
    mMessageList<<msg;
}

QHash<int, QByteArray> MessageModel::roleNames() const
{
    QHash<int, QByteArray> roles;
    roles[ROOMID] = "roomid";
    roles[SENDER] = "sender";
    roles[MESSAGE] = "message";
    roles[TYPE] = "type";
    roles[DATETIME] = "datetime";
    roles[ISME] = "isme";
    roles[ISREAD] = "isread";
    roles[ISMESSAGESENDSUCCESS] = "ismessagesendesuccess";
    return roles;
}




