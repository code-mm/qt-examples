#include "mainwindow.h"

#include <QApplication>

#include <QFile>

#include <QDebug>
#include <QFileInfo>
#include <QDataStream>
#include <QTextStream>

#include <iostream>


void qFile()
{
    QFile *file = new QFile("1.txt");


    if(!file->open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug()<<file->errorString();
    }

    file->write("Hello QFile");

    file->flush();

    qDebug()<<    file->size();

    file->close();



}


void qFileInfo()
{

    QFileInfo *info=new QFileInfo("1.txt");

    qDebug()<<info->size();
    qDebug()<<info->absoluteFilePath();

}

void qTextStream()
{

    QFile *file = new QFile("1.txt");

    if(!file->open(QIODevice::WriteOnly | QIODevice::Text))
    {

    }

    file->write("Hejgaodshgjoa");
    file->flush();

    std::string s = file->readAll().toStdString();

    std::cout<<s<<std::endl;



    //    QTextStream *is = new QTextStream(file);


    //    QString s=  is->readAll();

    //    qDebug()<<s;







    file->close();




}

int main(int argc, char *argv[])
{
    QCoreApplication app(argc,argv);



    return app.exec();
}
