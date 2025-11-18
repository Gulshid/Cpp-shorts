// 2 Dimensional Array in C++
#include<iostream>
using namespace std;

int main()
{
    // 2D Array Initialize
    int Array_2 [2][3] = {{1,2,3}, {4,5,6}};

    // display the Array Element using one by one Method 
    cout<<"Row 1 :"<<endl;
    cout<<Array_2[0][0] <<" "<< Array_2[0][1] <<" "<<Array_2[0][2]<<endl;
    cout<<"Row 2 :"<<endl;
    cout<<Array_2[1][0] <<" "<< Array_2[1][1] <<" "<<Array_2[1][2]<<endl;
}