// Write a Program for find the table of any number using for and while loop
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the table value :";
    cin>>num;
    cout<<"For loop"<<endl;
    for( int a = 1; a <= 10; a++)
    {
        cout<<num<<"X"<<a<<"="<<num * a<<endl;
    }


    cout<<endl;

    cout<<"While Loop"<<endl;

    int s = 1;
    while(s <=10)
    {
        cout<<num<<"X"<<s<<"="<<num * s<<endl;
        s++;
    }
}