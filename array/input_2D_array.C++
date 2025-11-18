// 2D Array Input from User at Runtime 
#include<iostream>
using namespace std;

int main()
{
    // Array Declare ----> 3 x 3
    int array_number [3][3];
    cout<<"Enter the values for Array :"<<endl;

    for(int i = 0; i < 3; i++) // use for row
    {
        for(int j = 0; j < 3; j++) // use for col
        {
            cin>>array_number[i][j];
        }
    }

    cout<<"Array Element :"<<endl;

    for(int a = 0; a < 3; a++) // use for row
    {
        for(int b = 0; b < 3; b++) // use for col
        {
            cout<<array_number[a][b]<<" ";
        }
    }
    cout<<endl;
}