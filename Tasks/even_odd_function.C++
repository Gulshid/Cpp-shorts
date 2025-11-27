// Task : Even and Odd function
#include<iostream>
using namespace std;

// function for Even and Odd
int Even_Odd(int z)
{
    // logic for  Even 
    if (z % 2 == 0)
    {
        cout<<"The Number :"<<z<<" that  you are entered is Even***"<<endl;
    }

    // logic for odd
    else if (z % 2 == 1)
    {
        cout<<"The Number :"<<z<<" that you are entered is Odd***"<<endl;

    }

}


int main()
{
    // Call 
    int x;
    cout<<"Enter the value for x :";
    cin>>x;

    cout<<"Even Odd is : "<<endl;
    cout<<Even_Odd(x)<<endl;

}