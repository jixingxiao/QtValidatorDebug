#ifndef TCLISTMODE_H
#define TCLISTMODE_H

#include <QObject>

class TCListMode : public QObject
{
    Q_OBJECT
    Q_PROPERTY(QString modelID READ modelID WRITE setModelID NOTIFY modelIDChanged)
    Q_PROPERTY(QString modelName READ modelName WRITE setModelName NOTIFY modelNameChanged)
public:
    explicit TCListMode(QObject *parent = 0);

public:
    QString modelID   ();
    void setModelID   (QString para);
    QString modelName ();
    void setModelName (QString para);
    void setImg(int);
private:
    QString m_modelID       ;
    QString m_modelName     ;

signals:
    void modelIDChanged();
    void modelNameChanged();

public slots:
};

#endif // TCLISTMODE_H
