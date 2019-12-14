#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlComponent>
#include <QObject>
#include <QQuickItem>
#include <QDebug>
#include <QQuickView>
#include <QMetaObject>

int main(int argc,char *argv[])

{
    QGuiApplication app(argc,argv);

    QQmlEngine *engine=new QQmlEngine();
    QQmlComponent component(engine);
    component.loadUrl(QUrl("qrc:///main.qml"));

    // =windows
    QQuickView *quickView =new QQuickView();

    quickView->setSource(QUrl("qrc:///main.qml"));

    quickView->show();

    quickView->setWidth(100);

    if(component.isReady()){
        //item
        QObject *myObject=component.create();
        QQuickItem *item=qobject_cast<QQuickItem *>(myObject);
        int width=item->width();
        item->setWidth(10);

        qDebug()<<width;
    }

    return app.exec();
}


//int main(int argc,char *argv[])
//{

//    QGuiApplication app(argc,argv);

//    QQmlEngine engine;
//    QQuickView *view = new QQuickView();

//    view->setSource(QUrl("qrc:/main.qml"));

//    view->show();

//    QQmlComponent component(&engine,"qrc:/main.qml");
//    QObject *object = component.create();

//    QVariant variantValues;

//    QMetaObject::invokeMethod(
//        object,
//        "call",
//        Q_RETURN_ARG(QVariant,variantValues) ,
//        Q_ARG(QVariant,QVariant("Hello C++ "))
//        );


//    qDebug()<<"QML func return data"<<variantValues.toString();

//    delete  object;
//    return  app.exec();
//}


//int main(int argc,char *argv[])
//{

//    QGuiApplication app(argc,argv);

//    QQmlEngine engine;
//    QQuickView *view = new QQuickView();

//    view->setSource(QUrl("qrc:/main.qml"));

//    view->show();

//    QQmlComponent component(&engine,"qrc:/main.qml");
//    QObject *object = component.create();
//    QObject * button=    object->findChild<QObject * >("button");
//    QVariant variantValues;
//    QMetaObject::invokeMethod(
//        button,
//        "changeText",
//        Q_RETURN_ARG(QVariant,variantValues) ,
//        Q_ARG(QVariant,QVariant("确定"))
//        );

//    qDebug()<<"QML func return data"<<variantValues.toString();

//    delete  object;
//    return  app.exec();
//}



//int main(int argc,char *argv[])
//{

//    QGuiApplication app(argc,argv);

//    QQmlEngine engine;
//    QQuickView *view = new QQuickView();

//    view->setSource(QUrl("qrc:/main.qml"));

//    view->show();

//    QQmlComponent component(&engine,"qrc:/Home.qml");
//    QObject *object = component.create();
//    QObject * button=    object->findChild<QObject * >("button");
//    QVariant variantValues;
//    QMetaObject::invokeMethod(
//        button,
//        "changeText",
//        Q_RETURN_ARG(QVariant,variantValues) ,
//        Q_ARG(QVariant,QVariant("确定"))
//        );

//    qDebug()<<"QML func return data"<<variantValues.toString();

//    delete  object;
//    return  app.exec();
//}
