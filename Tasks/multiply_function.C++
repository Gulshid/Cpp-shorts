// Task : Multiplication function
#include<iostream>
using namespace std;

//  function for multilpy
int multilpy(int val_1, int val_2)
{
    // without third variable
    // return val_1 * val_2;

    // with third variable
    int val_3 = val_1 * val_2;
    return val_3;
}

int main()
{
    // Call
    int a,b;
    cout<<"Enter the value for a and b :"<<endl;
    cin>>a>>b;

    cout<<"The Mul of two value is :"<<multilpy(a,b)<<endl;


}