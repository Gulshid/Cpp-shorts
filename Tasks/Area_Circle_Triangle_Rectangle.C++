// Write a C++ Program that can find the Area of Circle , Triangle and Rectangle
#include<iostream>
using namespace std;

int main()
{
    // Area of Circle
    float pi = 3.14, radius;
    cout<<"Enter the value for radius :";
    cin>>radius;

    // formula for Area of Circle
    float Area_Circle = pi * radius * radius;
    cout<<"The Area of Circle is :"<<Area_Circle<<endl;

    cout<<"*****************"<<endl;

    // Area of Triangle 
    float base , height;
    cout<<"Enter the value for Base :";
    cin>>base;

    cout<<"Enter the value for Height :";
    cin>>height;


    // formula for Area of Triangle 
    float Area_Triangle = 0.5 * base * height;
    cout<<"The Area of Triangle is :"<<Area_Triangle<<endl;

    cout<<"****************"<<endl;

    // Area of Rectangle 
    float length, width;
    cout<<"Enter the value for length:";
    cin>>length;

    cout<<"Enter the value for width:";
    cin>>width;

    // formula for Area of Rectangle 
    float Area_Rectangle = length * width;
    cout<<"The Area of Rectangle is :"<<Area_Rectangle<<endl;


}

