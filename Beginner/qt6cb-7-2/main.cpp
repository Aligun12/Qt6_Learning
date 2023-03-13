#include <QCoreApplication>
#include <QDebug>
#include <iostream>


using namespace std;

void test()
{
 qInfo() << "Hello test ";
}

void test2()
{
 qInfo() << "Hello test2 ";
 test();
}

int calc(int offset, int age){
    int x = offset * age;
    qInfo() << "Calc:"<<x;
    return x;
}
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    int age,offset;
    test2();
    qInfo()<<"Enter your age:";
    cin>>age;
    int value = calc(2,age);
    qInfo()<<"Value:"<<value;
    return a.exec();
}
