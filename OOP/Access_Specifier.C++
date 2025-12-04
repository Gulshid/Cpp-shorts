/* Access Specifier / Access Modifier


⭐ Public

Members can be accessed from anywhere.

🔐 Protected

Members can be accessed inside the class and in derived (child) classes.

🔒 Private

Members can be accessed only inside the same class.

*/

#include<iostream>
using namespace std;

class A
{
    public:
    int a;

    protected:
    int b;

    private:
    int c;
};


class B: public A
{
    public:
    void values()
    {
        a = 3;
        b = 4;
        // c = 6;
        cout<<"a :"<<a<<endl;
        cout<<"b :"<<b<<endl;
        // cout<<"c :"<<c<<endl;
    }

};

int main()
{
    B b1;
    b1.values();

}
