/*
    1. Pointer Initialization
    2. Reference Operator (&)
    3. DeReference Operator (*)
*/
#include<iostream>
using namespace std;

int main()
{
    int val = 4;
    int *y = &val;

    cout<<"The value of val : "<<val<<endl;
    cout<<"The Address of val :"<<&val<<endl;

    cout<<"The value of y is :"<<*y<<endl;
    cout<<"The Address of y is :"<<y<<endl;


}
