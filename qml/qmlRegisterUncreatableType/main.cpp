#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QtQml>

#include "mycppclass.h"
int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    MyCPPClass myCppObj;
    qmlRegisterUncreatableType<MyCPPClass>("MyModule",1,0,"MyCPPClass","can not instantiate MyCPPClass in qml");

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("myCppObj",&myCppObj);
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
