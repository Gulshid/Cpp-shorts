// Write a C++ Program that can Convert Celsius to Fahrenheit and Fahrenheit to Celsius
#include<iostream>
using namespace std;

int main()
{
    //  Convert Celsius to Fahrenheit 
    cout<<" *** Celsius to Fahrenheit Conversion ****"<<endl;
    float cel;
    cout<<"Enter the value for Celsius :";
    cin>>cel;


    // formula for Convert the Celsius into fahrenheit 
    float Fahrenheit = (cel * 9 / 5) + 32;
    cout<<"The Fahrenheit is :"<<Fahrenheit<<endl;


    //  Convert Fahrenheit  to Celsius 
    cout<<"*** Fahrenehit to Celsius Conversion ***"<<endl;
    float fah;
    cout<<"Enter the value for Fahrenheit :";
    cin>>fah;

    // formula for Convert the Fahrenhit  into Celsius
    float Celsius = (fah - 32) * 5/9;
    cout<<"The Celsius is :"<<Celsius<<endl;
}
