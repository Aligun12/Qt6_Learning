
#include <QCoreApplication>
#include <QDebug>
#include <iostream>
#include <array>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
while(true){
    qInfo()<<"Please enter your age";

    cin>>age;


    age>=1 && age<=120 ? qInfo("Age: %d",age) : qFatal("Warning") ;
}
    return a.exec();
}
