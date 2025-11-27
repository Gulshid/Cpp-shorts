// Task : Factorial function
#include<iostream>
using namespace std;
// 4! = 4 * 3 * 2 * 1 = 24
// function for factorial
int fact(int num)
{
    if (num < 0)
    {
        return -1;
    }

    else if (num == 0 || num == 1)
    {
        return 1;
    }

    else
    {
        return num * fact(num - 1);
    }
}

int main()
{
    int x;
    cout<<"Enter the value for x :";
    cin>>x;

    int result = fact(x);

    if(result == -1)
    {
        cout<<"There is No Factorial for Negative Number ***"<<endl;
    }

    else
    {
        cout<<"The Factorial of :"<<x<<" is : "<<result<<endl;
    }

}