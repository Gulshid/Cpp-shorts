// Write a Program for Switch and Break Statement
#include<iostream>
using namespace std;


int main()
{
    int var;
    cout<<"Enter the value for var:";
    cin>>var;

    switch(var)
    {
        case 1 : cout<<"The value is 1 "<<endl;
                break;
        case 2 : cout<<"The value is 2"<<endl;
                break;
        case 3: cout<<"The value is 3"<<endl;
                break;
        default: cout<<"The value is neither 1 , 2 and 3"<<endl;
    }
}
