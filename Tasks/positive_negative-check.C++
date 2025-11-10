// Write a Program that can find whether the number is Positive , Negative or Zero
#include<iostream>
using namespace std;

int main()
{
    int x;
    cout<< "Enter the value for x :";
    cin>>x;

    if (x > 0)
    {
        cout<<"The value is Positive "<<endl;
    }

    else if(x < 0)
    {
        cout<<"The value is Negative "<<endl;
    }

    else 
    {
        cout<<"The value is Equal to Zero"<<endl;
    }



}