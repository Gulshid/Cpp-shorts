// task :  Sum of Array Element 
#include<iostream>
using namespace std;

int main()
{
    // Initialize Array --- > sum
    int array_1 [5] = {2,4,5,3,6}; // 20 
    int sum = 0;

    for (int i = 0; i < 5; i++)
    {
        sum = sum + array_1[i];
    }

    cout<<"The Sum of Array ELement is :"<<sum<<endl;

    // Runtime value 
    int array_2 [5];
    int add = 0;
    cout<<"Enter the value for array 2:";
    
    for(int a = 0; a < 5; a++)
    {
        cin>>array_2[a];
    }

    for(int b = 0; b < 5; b++)
    {
        add += array_2[b];
    }

    cout<<"Sum of Array ELement is :"<<add<<endl;
}
