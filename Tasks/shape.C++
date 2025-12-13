// Shape ====> Circle
//  ||=====> Rectangle.  
// Show the Inheritence
#include<iostream>
using namespace std;

class Shape
{
    public:
    void shape()
    {
        cout<<"*** This is Shape ***"<<endl;
    }

};

class Circle: public Shape
{
    private:
    // pi * r * r 
    double pi = 3.14, radius;

    public:
    void input()
    {
        cout<<"Enter the value for radius :";
        cin>>radius;
    }

    // find the area of circle
    void area()
    {
        double area_of_circle = pi * radius * radius;
        cout<<"The Area of Circle is :"<<area_of_circle<<endl;
    }


};

class Rectangle: public Shape 
{
    private:
    double length, width;
    // length * width

    public:
    void input()
    {
        cout<<"Enter the value for length :";
        cin>>length;

        cout<<"Enter the value for width :";
        cin>>width;
    }

    // find the area of rectangle
    void area()
    {
        double area_of_rect = length * width;
        cout<<"The Area of Rectangle is :"<<area_of_rect<<endl;
    }

};

int main()
{
    Circle c1;
    c1.shape();
    cout<<"*** The Area of Circle ***"<<endl;

    c1.input();
    c1.area();


    Rectangle r1;
    r1.shape();
    r1.input();
    r1.area();

}