#include <QCoreApplication>
#include <iostream>

using namespace std;

int get_size()
{
    qInfo() <<"Enter in meter:";
    int value;
    cin>>value;
    return value;

}



double calc_paint(int w,int h)
{
    double sqft = w*h;
    double paint =sqft/325;
    return paint;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    qInfo() <<"Enter the ceiling height in meter:";
    int height = get_size();
    if(height<=0)qFatal("Please Read To Manual");
    double paint;

    do
    {
        qInfo() <<"Add a wall by entering a number or 0 to stop";
        int value = get_size();
        if(value<=0)break;
        double g = calc_paint(value,height);
        paint+=g;

    }while(true);
    qInfo() <<"Total gallons needed:"<< paint;
    return a.exec();
}
