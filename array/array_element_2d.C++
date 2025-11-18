// 2 Dimensional Array in C++
#include<iostream>
using namespace std;

int main()
{
    // Array Initialization
    int array_1 [2][3] = { {1,2,3}, {4,5,6}};
    // Display using one by one Method
    cout<<"Row 1 :";
    cout<< array_1[0][0] <<" " << array_1[0][1] <<" " <<array_1[0][2]<<endl;

    cout<<"Row 2 :";
    cout<<array_1[1][0]<<" "<< array_1[1][1] << " "<< array_1[1][2]<<endl;
}