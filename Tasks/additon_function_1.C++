// Task : Additon function in C++
#include<iostream>
using namespace std;
// function for add
int add(int x, int y)
{
    // return x + y; ===>1. method > direct method
    int z = x + y; // ====> 2. method
    return z;
}

int main()
{
    //  Call
    cout<<"The Addition of two value :"<<add(4, 8)<<endl;

}