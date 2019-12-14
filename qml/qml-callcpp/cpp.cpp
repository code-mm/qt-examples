
#include "cpp.h"

Cpp::Cpp()
{


}

QString Cpp::readMsg()
{
    return mMsg;
}

void Cpp::sendMsg(QString msg)
{
    qDebug()<<"sendMsg : "<<msg;

    if(msg!=mMsg){
        mMsg=msg;
    }

    emit signalsMsg(msg);

}



void Cpp::slotsMsg(QString msg)
{

    qDebug()<<"slotsMsg : "<<msg;

}

void Cpp::slotsMsg()
{
    qDebug()<<"slotsMsg : not params";
}



