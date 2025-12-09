// 1️⃣ Encapsulation. and 2️⃣ Abstraction
#include<iostream>
using namespace std;

class Additon
{
    private: // ==> Encapsulation
    int a,b; 

    public: // ==> Encapsulation
    int sum()
    {
        cout<<"Enter the value for a :";
        cin>>a;

        cout<<"Enter the value for b :";
        cin>>b;

        // return a + b ===> without third variable method
        int add = a + b; // ====> with third variable method
        return add;
    }


};

int main()
{
    Additon ad;
    int result = ad.sum(); //===> Abstraction 
    cout<<"The addition of two value is :"<<result<<endl;

}