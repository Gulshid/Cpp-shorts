// Write a Program that can find the prime number 
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the Number for Prime Number :";
    cin>>num;

    bool isprime = true;

    if(num <=1)
    {
        cout<<"There is No Prime Number for 0 and 1 or Negative Number "<<endl;

    }

    else{
        for (int i = 2; i < num; i++)
        {
            if( num % i == 0)
            {
                isprime = false;
                break;
            }
        }

        if(isprime)
        {
            cout<<"The Number "<<num<<" is Prime Number "<<endl;
        }

        else{
            cout<<"The Number "<<num<<" is Not a Prime Number "<<endl;
        }


    }
}