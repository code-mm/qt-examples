#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQuickView>

int main(int argc, char *argv[])
{
    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

    QQuickView *view = new QQuickView();

    view->resize(500,500);

    view->setTitle("QQuickView");

    view->setX(500);

    view->setY(500);


    view->setSource(QUrl(QStringLiteral("qrc:/main.qml")));

    view  ->show();


    view->resize(1500,1500);

    return app.exec();
}
