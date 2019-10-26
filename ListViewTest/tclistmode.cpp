#include "tclistmode.h"

TCListMode::TCListMode(QObject *parent) : QObject(parent)
{

}

QString TCListMode::modelID()
{
    return m_modelID;
}

void TCListMode::setModelID(QString para)
{
    if ( m_modelID != para )
    {
        m_modelID = para;
        modelIDChanged();
    }
}

QString TCListMode::modelName()
{
    return m_modelName;
}

void TCListMode::setModelName(QString para)
{
    if ( m_modelName != para )
    {
        m_modelName = para;
        emit modelNameChanged();
    }
}

void TCListMode::setImg(int)
{




}
