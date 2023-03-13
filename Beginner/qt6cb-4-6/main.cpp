#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age = 44;
    const int id = 255;

    //id=12;
    qInfo() << id;

    return a.exec();
}
