// Pass by value vs Pass by Reference
#include<iostream>
using namespace std;

// function for Pass by value
int pass_by_value(int x)
{
    x = x + 3;
    return x;
}

// function for Pass by Reference
int pass_by_reference(int &y)
{
    y = y + 3;
    return y;
}

int main()
{
    // Call
    int a = 2;
    cout<<"Before :"<<a<<endl;
    pass_by_value(a);
    cout<<"After :"<<a<<endl;

    cout<<"Before :"<<a<<endl;
    pass_by_reference(a);
    cout<<"After :"<<a<<endl;



}