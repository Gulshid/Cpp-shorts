// Task : Square and Cube function
#include<iostream>
using namespace std;

// function for Square
int Square(int num)
{
    int square = num * num;
    return square;
}

// function for Cube
int Cube(int n)
{
    int cube = n * n * n;
    return cube;
}

int main()
{
    // Sqaure function
    cout<<"Square Function :"<<endl;
    int a;
    cout<<"Enter the value for a :";
    cin>>a;

    cout<<"The Sqaure of :"<<a<<" is :"<<Square(a)<<endl;


    // Cube function
    cout<<"Cube Function :"<<endl;
    int b;
    cout<<"Enter the value for b :";
    cin>>b;

    cout<<"The Cube of "<<b<<" is :"<<Cube(b)<<endl;


}