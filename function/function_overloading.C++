// Function Overloading in function
#include<iostream>
using namespace std;

// function overloading

// function 1
int add(int x , int y)
{
    return x + y;
}

// function 2
float add(float x, int y)
{
    return x + y;
}

int main()
{
    // Call
    cout<<"Add of 1 function :"<<add(3,5)<<endl;
    cout<<"Add of 2 function :"<<add(2,9)<<endl;

}