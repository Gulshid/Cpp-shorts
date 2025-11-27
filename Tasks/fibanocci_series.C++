// Task : Fibanocci Series
#include<iostream>
using namespace std;

// function for fibanocci Series
int fibanocci(int x)
{
    if (x == 0)
    {
        return 0;
    }

    else if (x == 1)
    {
        return 1;
    }

    else
    {
        // formula for fibanocci series
        return fibanocci(x - 1) + fibanocci(x - 2);
    }
}


int main()
{
    //  Call
    int num;
    cout<<"Enter the value for num :";
    cin>>num;

    cout<<"Fibanocci Series :";

    for(int z = 0; z <= num; z++)
    {
        cout<<fibanocci(z)<<" ";
    }
    cout<<endl;


}