// Task : Division function
#include<iostream>
using namespace std;

// function for Division
int Division(int v, int q)
{
    // Without third variable
    // return v / q;

    // Thired variable
    int s = v / q;
    return s;
}

int main()
{
    int w,e;
    cout<<"Enter the value for w and e :"<<endl;
    cin>>w>>e;

    cout<<"The Division of two value is :"<<Division(w, e)<<endl;

}