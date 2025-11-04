// Write a Program that can divide two value With and Without Thired Variable
#include<iostream>
using namespace std;

int main()
{
    int x , z;
    cout<<"Enter the value for x :";
    cin>>x;

    cout<<"Enter the value for y :";
    cin>>z;

    // 1. Method divide two value without thired variable
    cout<<"The Division of two value by using without thired varibale method :"<< x / z<<endl;


    // 2. Method divide two value with thired variable 
    int y = x / z;
    cout<<"The DIvision of two value bby using with thired varibale method :"<<y<<endl;




}