#include <QCoreApplication>
#include <QtDebug>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);


    bool LightSwitch = false;

    qInfo() << " Is On: " << LightSwitch;

    LightSwitch = true;

    qInfo() << " Is On: " << LightSwitch;


    return a.exec();
}
