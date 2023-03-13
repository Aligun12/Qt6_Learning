#include <QCoreApplication>
#include <iostream>
#include <string>
#include <QDebug>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    int age;
    string name;

    cout<<"Please enter your name"<<endl;
    qInfo() <<"Please enter your name\n";

    cin>>name;

    cout<<"Please enter your age"<<endl;
    qInfo() <<"Please enter your age\n";

    cin>>age;

    cout <<"Your Name:"<<name<<endl;
    qInfo()<<"Age:"<<age;


    return a.exec();
}
