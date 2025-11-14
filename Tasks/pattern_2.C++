
/*
                Pattern No 2
*****                           12345
****            or              1234
***                             123
**                              12
*                               1


*/

#include<iostream>
using namespace std;

int main()
{
    int row;
    cout<<"Enter the value for row: ";
    cin>>row;

    for( int x = row; x >= 1; x--)
    {
        for (int y = 1; y <= x; y++)
        {
            // cout<<"*"<<" ";
            cout<<y<<" ";
        }
        cout<<endl;
    }
}


