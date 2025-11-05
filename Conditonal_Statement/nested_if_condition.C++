// Write a Program for Nested if-else Statement
#include<iostream>
using namespace std;

int main()
{
    int value;
    cout<<"Enter the any Number :";
    cin>>value;

    if ( value >= 0)
    {
        if (value > 0)
        {
            cout<<"The value is Greater than Zero "<<endl;
        }

        else
        {
            cout<<"The value is Equal to Zero "<<endl;
        }
    }

    else
    {
        cout<<"The value Less than Zero "<<endl;
    }
}