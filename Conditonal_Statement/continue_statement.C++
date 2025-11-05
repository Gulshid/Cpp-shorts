// Write a Program for Continue Statement
#include<iostream>
using namespace std;

int main()
{
    for (int z = 1; z <=10; z++)
    {
        if( z == 5)
        {
            continue;  // skip a value
        }
        cout<<z<<" ";
    }
}