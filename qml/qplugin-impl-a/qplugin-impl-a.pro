TEMPLATE        = lib       #表示这个makefile是一个lib的makefile，应用程序则为app
CONFIG         += plugin    #应用程序是一个插件

QT += quick

CONFIG += c++11


TARGET          = pluginA  #生成插件的名称
DESTDIR         = /Users/maohuawei/project/qt/qt-examples/qml/build-qplugin-framework-Desktop_Qt_5_14_0_clang_64bit-Debug/qplugin-framework.app/Contents/MacOS/plugins/ #生成插件的目录



SOURCES += \
        main.cpp \
        plugina.cpp

RESOURCES += qml.qrc

HEADERS += \
    IAppPluginInterface.h \
    plugina.h



