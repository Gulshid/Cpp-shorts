// Complex Number
#include<iostream>
using namespace std;

class Complex
{
    private:
    int real, imag;

    public:
    void Input()
    {
        cout<<"*** Complex Number ***"<<endl;
        cout<<"Enter the value for Real Part :";
        cin>>real;

        cout<<"Enter the value for Imaginery part :";
        cin>>imag;
    }

    void display()
    {
        cout<<"Complex Number :";
        cout<<real<<" + "<<imag<<"i"<<endl;
        cout<<"Real Part :"<<real<<endl;
        cout<<"Imaginery part :"<<imag<<"i"<<endl;
    }
};

int main()
{
    // Object 
    Complex  comp;
    comp.Input();
    comp.display();

}