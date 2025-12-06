// Constructor and Destructor in OOP
#include<iostream>
using namespace std;

class A
{
    private:
    int a;

    public:
    // constructor
    A()
    {
        cout<<"Enter the value for a :";
        cin>>a;

        cout<<"The value of a is :"<<a<<endl;
    }

    // destructor
    ~A()
    {
        cout<<"The value of a "<<a<<" is Destroyed"<<endl;

    }

};

int main()
{
    A obj;

}
