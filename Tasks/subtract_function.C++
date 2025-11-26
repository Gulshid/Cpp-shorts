// Task : Subtraction Function
#include<iostream>
using namespace std;
// function for subtraction
int sub(int var_1, int var_2)
{
    // direct method / without third variable
    // return var_1 - var_2;

    //  with third variable
    int var_3 = var_1 - var_2;
    return var_3;

}

int main()
{
    // Call 
    int x,y;
    cout<<"Enter the value for x and y :"<<endl;
    cin>>x>>y;
    cout<<"The Subtraction of two value is :"<<sub(x, y)<<endl;

}