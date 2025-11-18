// 2D Array Element Display using loop
#include<iostream>
using namespace std;

int main()
{
    // 2D Array Initialize --> 3 x 4
    int Array_num [3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

    // display the Array ELement using for loop
    for(int a = 0; a < 3; a++) //use for row
    {
        for(int b = 0; b < 4; b++) // use for col
        {
            cout<<Array_num[a][b]<<" ";
            
        }

    }
    cout<<endl;

    
}