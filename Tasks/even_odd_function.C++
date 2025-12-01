// Task : Check Even and Odd 
#include<iostream>
using namespace std;

// Even / Odd function
int Even_Odd(int z)
{
    // Even logic 
    if(z % 2 == 0)
    {
        return z;
    }

    // Odd logic
    else if(z % 2 == 1)
    {
        return z;
    }
}


int main()
{
    int var;
    cout<<"Enter the value for var :";
    cin>>var;

    int result = Even_Odd(var);
    if (result % 2 == 0)
    {
        cout<<"The Number "<<result<<" is Even Number "<<endl;
    }

    else
    {
        cout<<"The Number "<<result<<" is Odd Number "<<endl;
    }

}