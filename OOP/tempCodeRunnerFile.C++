// 1️⃣ Encapsulation. and 2️⃣ Abstraction
#include<iostream>
using namespace std;

class Additon
{
    private:
    int a,b;

    public:
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
    cout<<"the addition of two value is :"<<ad.sum();

}