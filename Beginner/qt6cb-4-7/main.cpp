#include <QCoreApplication>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
   // int red =0;
    //int green = 1;
    //int blue = 3467;
    enum Color{red=100,green=258,blue=255};
    /* (Dizi gibi Birşey)İnteger değerler atayabiliriz
    ama bu değerler sabit olur değiştirilemez.*/
    Color mycolor = Color ::blue;
    qInfo() << "Color:"<<mycolor;


    return a.exec();
}
