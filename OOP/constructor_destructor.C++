// Consturctor and Destructor in OOP
#include<iostream>
using namespace std;

class A{

    private:
    int x;

    public:
    A(){
        cout<<"ENter the value for x :";
        cin>>x;

        cout<<"The value of x :"<<x<<endl;
    }

    ~A(){
        cout<<"The value of x is "<<x<<" is destroyed "<<endl;
    }
};

int main()
{
    A a;

}