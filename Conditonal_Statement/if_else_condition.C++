// Write a Program for if - else Statement
#include<iostream>
using namespace std;


int main()
{
    int y;
    cout<<"Enter the value for y :";
    cin>>y;


    if ( y > 0)
    {
        cout<<"The value of y Greater than Zero"<<endl;
    }

    else if( y < 0)
    {
        cout<<"The value of y Less than Zero "<<endl;
    }

    else
    {
        cout<<"The value of y is Equal to Zero "<<endl;
    }

}