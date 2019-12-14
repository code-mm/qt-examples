#include "mainwindow.h"

#include <QApplication>

#include <QSql>
#include <QSqlDatabase>
#include <QSqlError>
#include <QSqlQuery>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //    MainWindow w;
    //    w.show();



    QSqlDatabase user=  QSqlDatabase::addDatabase("QSQLITE");
    user.setDatabaseName("user.db");
    user.open();
    QSqlQuery sqlQuery;

    sqlQuery.exec("create table user (username text)");
    sqlQuery.exec("insert into user values ('aa')");
    sqlQuery.exec("insert into user values ('aa')");

    sqlQuery.exec("insert into user values ('aa')");


    QSqlDatabase message=  QSqlDatabase::addDatabase("QSQLITE");
    message.setDatabaseName("message.db");
    message.open();
      QSqlQuery sqlQuery1;



    return a.exec();
}
