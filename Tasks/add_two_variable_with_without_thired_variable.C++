// Write a Program that can Add two value With and Without Thired Variable
#include<iostream>
using namespace std;

int main()
{
    int a , b;
    cout<<"Enter value for a:";
    cin>>a;

    cout<<"Enter the value for b:";
    cin>>b;

    // 1.Method add two value / variable without thired variable
    cout<<"The Addition of two value is :"<< a + b<<endl;


    // 2. Method add two value / variable  with thired varibale
    int c = a + b;
    cout<<"The Addition of two value using thired variable :"<<c<<endl;

}

