#include <QCoreApplication> //ÇEKİDEK ALTYAPISI
#include <QDebug>

int main(int argc, char *argv[]) //ANA PROGRAM
{
    QCoreApplication a(argc, argv);
    qInfo() << "Hello World";

    return a.exec();
}
