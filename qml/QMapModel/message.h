#ifndef MESSAGE_H
#define MESSAGE_H

#include <QString>
#include <QDate>
#include <QDateTime>

    enum TYPE{
        TEXT,
        };


class Message
{
public:
    Message();

    QString getRoomid() const;
    void setRoomid(const QString &value);

    QString getSender() const;
    void setSender(const QString &value);

    QString getMessage() const;
    void setMessage(const QString &value);

    TYPE getType() const;
    void setType(const TYPE &value);

    QDateTime getDateTime() const;
    void setDateTime(const QDateTime &value);

    bool getIsMe() const;
    void setIsMe(bool value);

    bool getIsRead() const;
    void setIsRead(bool value);

    bool getIsMessageSendSuccess() const;
    void setIsMessageSendSuccess(bool value);

private:

    // 消息属于的房间
    QString roomid;

    // 消息发送者
    QString sender;

    // 消息内容
    QString message;

    // 消息类型，文本，文件，表情
    TYPE type;

    // 消息时间
    QDateTime dateTime;

    // 消息是否为自己发送
    bool isMe;

    // 消息是否已读
    bool isRead;

    // 消息是否发送成功
    bool isMessageSendSuccess;
};

#endif // MESSAGE_H
