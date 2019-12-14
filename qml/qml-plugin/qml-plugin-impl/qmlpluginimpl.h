
#pragma once

#include <QQmlApplicationEngine>
#include <QtCore/qglobal.h>

#if defined(QTDLL_LIBRARY)
#  define QTDLLSHARED_EXPORT Q_DECL_EXPORT
#else
#  define QTDLLSHARED_EXPORT Q_DECL_IMPORT
#endif

class QTDLLSHARED_EXPORT QmlPlugin
{
public:
    void LoaderPlugin();

private:
    QQmlApplicationEngine engine;
};

extern "C" QTDLLSHARED_EXPORT void LoaderPluginApp();
