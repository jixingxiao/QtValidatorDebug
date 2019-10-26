#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>
#include "signalmode.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);

    SignalMode* sig = new SignalMode();

    QQmlApplicationEngine engine;
    engine.rootContext()->setContextProperty("dddddddddchen",sig);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
