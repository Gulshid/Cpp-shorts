// Write a Program that can Find the Table using nested for loop
#include<iostream>
using namespace std;

int main()
{
    int start, end;
    cout<<"Enter the Start of Table :";
    cin>>start;

    cout<<"Enter the end of Table :";
    cin>>end;


    for(int x = start; x <= end; x++) // start and end of table
    {
        cout<<"Table :"<<x<<endl;
        for(int y = 1; y <= 10; y++) // multiplication of table 
        {
            cout<<x<<" X "<<y<<" = "<<x * y<<endl;
        }
    }
}