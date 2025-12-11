// *** Conversion Celsius to fahrenheit and fahrenheit to Celsius ***
#include<iostream>
using namespace std;

class Tempreture
{
    private:
    double celsius, fahrenheit;

    public:
    void Celsius()
    {
        cout<<"Enter the value for Fahrenheit :";
        cin>>fahrenheit;

        celsius = (fahrenheit - 32) * 5/9;
        cout<<"The Celsius of "<<fahrenheit<<" is :"<<celsius<<endl;
    }

    void Fahrenheit()
    {
        cout<<"Enter the value for Celsius :";
        cin>>celsius;

        fahrenheit = (celsius * 9/5) + 32;
        cout<<"The Fahrenheit of "<<celsius<<" is "<<fahrenheit<<endl;
        
    }

};

int main()
{
    Tempreture tem;
    cout<<"*** Converison of Fahrenhiet to Celsius ***"<<endl;
    tem.Celsius();
    cout<<"*** Converison of Celsius to Fahrenheit ***"<<endl;
    tem.Fahrenheit();

}