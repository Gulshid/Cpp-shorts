// One Dimensional Array Input 
#include<iostream>
using namespace std;

int main()
{
    cout<<"Enter the values for Array :"<<endl;
    int number_values [5];

    for (int i = 0; i < 5; i++)
    {
        cin>> number_values[i];
    }

    cout<<" Display Array Element :";
    for (int z = 0; z < 5; z++)
    {
        cout<< number_values[z] <<" ";
    }
    cout<<endl;

}