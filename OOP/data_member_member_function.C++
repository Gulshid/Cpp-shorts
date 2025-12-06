// Data Member and Member function in OOP
#include<iostream>
using namespace std;

class Calculation
{
    private:
    int x, y; // Data Member

    public:
    void show_value() // Member function
    {
        cout<<"Enter the value for x :";
        cin>>x;

        cout<<"Enter the value for y :";
        cin>>y;

        cout<<"The value for x is :"<<x<<endl;
        cout<<"The value for y is :"<<y<<endl;
    }


};


int main()
{
    Calculation cal;
    cal.show_value();

}