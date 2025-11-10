// Write a Program that can find the Even and Odd Number
#include<iostream>
using namespace std;

int main()
{
    cout<<"Sequence of Even Number :"<<endl;

    for( int x = 1; x <= 20; x++)
    {
        // Even Number 
        if( x % 2 == 0)
        {
            cout<<x<<" ";
        }
    }

    cout<<endl;

    cout<<"Sequence of Odd Number:"<<endl;

    for( int y = 1; y <= 20; y++)
    {
        //Odd Number 
        if( y % 2 == 1)
        {
            cout<<y<<" ";
        }
    }

    cout<<endl;
}