#include<iostream>
using namespace std;

int main()
{
    int arr[]={23,45,76,97};

    int *p=arr;
    for(int i=0;i<4;i++)
    {
        cout<<*(p+i)<<endl;
    }
    return 0;
}