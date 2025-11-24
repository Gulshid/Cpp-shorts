// Default Parameter in Function
#include<iostream>
using namespace std;
// function for default parameter
void display_name(string name = "Default Value")
{
    cout<<"Name is :"<<name<<endl;
}

int main()
{
    //  Call
    display_name("Gulshid Zada");
    display_name();
    display_name("Muhammad");

}
