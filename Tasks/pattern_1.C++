/*
                Pattern No 1
    *                               1
    **                              12
    ***                 or          123 
    ****                            1234
    *****                           12345        

*/
#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the value for row :";
    cin>>row;

    for( int i = 1; i <= row; i++) // use for row
    {
        for(int z = 1; z <= i; z++ ) // use for displaying these row
        {
            // cout<<"*"<<" ";
            cout<<z<<" ";
        }
        cout<<endl;
    }
}