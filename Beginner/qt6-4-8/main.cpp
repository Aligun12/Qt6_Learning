#include <QCoreApplication>

enum Colors {black,red,green,blue};
struct product
{
    int weight;
    double value;
    Colors color;
};


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    product laptop;
    laptop.color = Colors::black;
    laptop.value = 255.2;
    laptop.weight = 27;


    qInfo() << "Weight:"<<laptop.weight;
    qInfo() << "Value:"<<laptop.value;
    qInfo() << "Color:"<<laptop.color;
    return a.exec();
}
