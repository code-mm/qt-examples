TEMPLATE = lib

QT += qml quick
CONFIG += c++11

SOURCES +=         qmlpluginimpl.cpp

HEADERS +=         qmlpluginimpl.h

RESOURCES += qml.qrc \
    image.qrc

TARGET          = impl  #生成插件的名称
DESTDIR         = /Users/maohuawei/project/qt/qt-examples/qml/qml-plugin/build-qml-plugin-framework-Desktop_Qt_5_14_0_clang_64bit-Debug/qml-plugin-framework.app/Contents/MacOS/plugins/QmlPlugin/ #生成插件的目录

