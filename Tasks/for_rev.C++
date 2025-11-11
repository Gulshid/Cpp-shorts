// Write a Program that can Print 1 to 10 in Forward and Reverse Order
#include<iostream>
using namespace std;

int main()
{
    cout<<"Forward Order :"<<endl;

    for (int a = 1;  a <= 100; a++)
    {
        cout<<a<<" ";
    }

    cout<<endl;


    cout<<"Reverse Order :"<<endl;

    for( int b = 100; b >=1; b--)
    {
        cout<<b<<" ";
    }
    cout<<endl;

}