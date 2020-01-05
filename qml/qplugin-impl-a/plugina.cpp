#include "plugina.h"

PluginA::PluginA()
{

}

void PluginA::instance()
{

    QJsonObject qJsonObject
        {
            {"name",name()},
            {"desc",desc()}

        };


    QJsonDocument qJsonDocument;
    qJsonDocument.setObject(qJsonObject);
    emit sendMessage(qJsonDocument.toJson());
}
