#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlExpression>
#include <QQmlComponent>
#include <QQmlEngine>
#include <QDebug>

#include<QObject>
#include <QQuickView>
int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQmlEngine *engine=new QQmlEngine;
    QQmlComponent component(engine);
    component.loadUrl(QUrl("qrc:/main.qml"));

    QObject *myObject=component.create();

    QQmlExpression *expr=new QQmlExpression(engine->rootContext(),
                                              myObject,"width*2");
    int result=expr->evaluate().toInt();

    qDebug()<<result;



    QQuickView *view = new QQuickView();

    view->setSource(QUrl("qrc:/main.qml"));

    view->show();


    return app.exec();
}
