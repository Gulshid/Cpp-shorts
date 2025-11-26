// Task : Additon function in C++
#include<iostream>
using namespace std;

// additon function
int add(int a, int b)
{
    int c = a + b;
    return c;

}

int main()
{
    int var_1, var_2;
    cout<<"Enter the value for var_1 and var_2:"<<endl;
    cin>>var_1>>var_2;
    cout<<"The Additon of Two value is :"<<add(var_1, var_2)<<endl;

}