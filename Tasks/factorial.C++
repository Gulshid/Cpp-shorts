// Write a program that can find the factorial of any number
#include<iostream>
using namespace std;

int main()
{
    int num, fact = 1;
    cout<<"Enter the vaue for fact that you can find :";
    cin>>num;


    if( num == 0 || num == 1)
    {
        cout<<"The fact of "<<num<<" is 1"<<endl;
    }

    else if ( num < 0 )
    {
        cout<<"There is no factorial for Negative Number "<<endl;
    }

    else{
        for (int i = 2; i <= num; i++)
        {
            fact = fact * i;
        }

        cout<<"The Fact of "<<num<<" is "<<fact<<endl;
    }
}