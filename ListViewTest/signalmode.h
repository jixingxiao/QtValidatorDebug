#ifndef SIGNALMODE_H
#define SIGNALMODE_H

#include <QObject>
#include "tclistmode.h"
#include <QDebug>
class SignalMode : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QList<QObject*> signal READ signal WRITE setSignal NOTIFY signalChanged)
    Q_PROPERTY(int change READ change WRITE setChange NOTIFY changeChanged)
public:
    explicit SignalMode(QObject *parent = 0);

    Q_INVOKABLE void desSig();
public:
    QList<QObject*> signal();
    void setSignal(QList<QObject*> para);
    int change() const
    {
        return m_change;
    }
    Q_INVOKABLE void setKK(int);
private:
    QList<QObject*> m_signal;
    int m_change;

signals:
void signalChanged();
void changeChanged(int change);

public slots:
void setChange(int change)
{
//    if (m_change == change)
//        return;
    //if(!change)
    {
        qDebug() << "-----------------dddddddddddddddddddvj";
        desSig();
    }

    m_change = change;
    emit changeChanged(change);
}
};

#endif // SIGNALMODE_H
