#include<iostream>
using namespace std;

class Base{
    int data1; // private by default and is not inheritable
    public:
        int data2;
        void setData();
        int getData1();
        int getData2();

};
void Base::setData(void){
    data1=10;
    data2=20;
}
int Base::getData1(void){
    return data1;
}
int Base::getData2(void){
    return data2;
}


class Derive:public Base{
    // Class is being derived publically
    int data3;
    public:
        void process();
        void display();
};
void Derive:: process(){
    data3= data2 * getData1();
}
void Derive ::display(){
    cout<<"value of data1 is:"<<getData1()<<endl;
    cout<<"value of data2 is:"<<data2<<endl;
    cout<<"value of data3 is:"<<data3<<endl;
}


int main()
{
    Derive d;
    d.setData();
    d.process();
    d.display();
    return 0;
}