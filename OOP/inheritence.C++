// 3️⃣ Inheritance
#include<iostream>
using namespace std;

class A
{
    protected:
    int x;

    public:
    void display_Num()
    {
        cout<<"Enter the value for x :";
        cin>>x;

        cout<<"the value of x is :"<<x<<endl;
    }

};


class B : public A
{
    private:
    int y;

    public:
    void display_value()
    {
        cout<<"Enter the value for y :";
        cin>>y;

        cout<<"the value of y is :"<<y<<endl;

    }

};

int main()
{
    A a;
    a.display_Num();

    B b;
    b.display_Num();
    b.display_value();



}