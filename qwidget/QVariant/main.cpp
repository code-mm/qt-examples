#include "mainwindow.h"

#include <QApplication>

#include <QVariant>

#include <cstdio>

int main(int argc, char *argv[])
{

    QVariant *vint=new QVariant(1);
    QVariant *vstring=new QVariant("1");

    int ia=vint->toInt();
    QString ss= vstring->toString();

    printf("%s\n",typeid (vint).name());
    printf("%s\n",typeid (vstring).name());
    printf("%s\n",typeid (ia).name());
    printf("%s\n",typeid (ss).name());
}
