// Task : name function 
#include<iostream>
using namespace std;

// function for name
void name(string n)
{
    cout<<"Name :"<<n<<endl;
}

int main()
{
    // Call 
    string x;
    cout<<"Enter Your name :";
    getline(cin, x);

    name(x);


}