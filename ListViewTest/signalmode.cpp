#include "signalmode.h"

SignalMode::SignalMode(QObject *parent) : QObject(parent)
{
    for ( int i = 0; i < 10; ++i )
    {
        TCListMode* tmpMode = new  TCListMode();
        if ( tmpMode != NULL )
        {
            tmpMode->setModelID(QString::number(i));
            tmpMode->setModelName(QString("listmode - " + QString::number(i)));
            m_signal.append(tmpMode);
        }
    }
}

void SignalMode::desSig()
{
//    qDeleteAll(m_signal);
//    m_signal.clear();
    for ( int i = 0; i < 10; ++i )
    {
        TCListMode* tmpMode = new  TCListMode();
        if ( tmpMode != NULL )
        {
            tmpMode->setModelID(QString::number(i));
            tmpMode->setModelName(QString("listmode - " + QString::number(i + 1* 20)));
            m_signal.append(tmpMode);
        }
    }
    qDebug() << "-fffffffffffffffffffffk2";
    //if(!m_change)
        emit signalChanged();
}

QList<QObject *> SignalMode::signal()
{
    return m_signal;
}

void SignalMode::setSignal(QList<QObject *> para)
{
    emit signalChanged();
}

void SignalMode::setKK(int change)
{
    qDebug() << "-fffffffffffffffffffffkl";
    setChange( change);
}
