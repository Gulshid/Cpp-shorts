// Write a Program that Swap two value With and Without Thired Variable

//  before swap ===> 4 , 5. after swap ===> 5 , 4

#include<iostream>
using namespace std;

int main()
{
    int x = 4 , y = 5;
    cout<<"Before Swapping :"<<endl;
    cout<<" x value :"<<x<<endl;
    cout<<" y value :"<<y<<endl;


    cout<<"After Swapping :"<<endl;
    // 1. Method swap two value without thired variable
    x = x + y; // 4 + 5 ==> x =  9
    y = x - y; // 9 - 5 ==> y = 4
    x = x - y; // 9 - 4 ==> x = 5

    // x = 5, y = 4
    cout<<" x value :"<<x<<endl;
    cout<<" y value :"<<y<<endl;


    // 2. Method swap two value with thired variable
    int a = 3, b = 6;
    cout<<"Before Swapping :"<<endl;
    cout<<"a value :"<<a<<endl;
    cout<<"b value :"<<b<<endl;


    cout<<"After Swapping :"<<endl;
    int c ;
    c = a; // c = 3
    a = b; // a = 6
    b = c;  // b = 3
    // a = 6, b = 3

    cout<<"a value :"<<a<<endl;
    cout<<"b value :"<<b<<endl;


}