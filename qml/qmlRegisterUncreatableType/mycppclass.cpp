#include "mycppclass.h"

MyCPPClass::MyCPPClass(QObject *parent) : QObject(parent)
{
}

QColor MyCPPClass::mycolour()
{
    return m_colour;
}

void MyCPPClass::setMycolour(QColor clr)
{
    m_colour = clr;
    Q_EMIT mycolourChanged();
}

int MyCPPClass::num()
{
    return m_num;
}

void MyCPPClass::setNum(int n)
{
    m_num = n;
    Q_EMIT numChanged();
}

QString MyCPPClass::getClassName()
{
    return "MyCPPClass";
}

