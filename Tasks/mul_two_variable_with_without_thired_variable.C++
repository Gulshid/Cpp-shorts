// Write a Program that can multilpy two value With and Without Thired Variable
#include<iostream>
using namespace std;

int main()
{
    int x , y;
    cout<<"Enter the value for x :";
    cin>>x;

    cout<<"Enter the value for y :";
    cin>>y;

    // 1. Method Multiply two value / variable without thired variable
    cout<<"The Multiplication of two value by using without thired Method :"<<x * y <<endl;

    // 2. Method Multiply two value / Variable with thired variable 
    int z = x * y;
    cout<<"The Multiplication of two value by using with thired Method :"<<z<<endl;


}