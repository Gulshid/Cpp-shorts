// Task : Swaping using pointer 

#include<iostream>
using namespace std;

int main()
{
    // Two variable declare
    int x,y;
    cout<<"Enter the value for x :";
    cin>>x;

    cout<<"Enter the value for y :";
    cin>>y;

    cout<<"Before Swaping the value of x and y :"<<endl;
    cout<<"The value of x :"<<x<<" and the value of y :"<<y<<endl;

    // Three variable declare
    int *a, *b, temp;

    a = &x;
    b = &y;

    // Swaping
    temp = *a;
    *a = *b;
    *b = temp;

    cout<<"After Swaping the value of x and y :"<<endl;
    cout<<"The value of x :"<<x<<" and the value of y :"<<y<<endl;

}