#include<iostream>
using namespace std;

int main()
{
    int a=8;
    int *b=&a;  //& is 'addrees of' operator 
                //* is 'value at' or 'derefrencing' operator
    cout<<a<<endl;
    cout<<&a<<endl;
    cout<<b<<endl;
    cout<<*b<<endl;

    cout<<"Double pointers:"<<endl;
    int **c=&b;
    cout<<b<<endl;
    cout<<&b<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    
    return 0;
}