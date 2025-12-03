// Class and Object 

/*      OOP {Object Oriented Programming}
        Class and Object 

        Class: A class is like a plan or design for making something.
        Object: An object is the thing made from that plan.


        💡 Example:

        Class → Mobile Phone design

        Object → Your real mobile phone
*/   
#include<iostream>
using namespace std;

// display the name of person
// class
class display
{
        public:
        void name()
        {
                cout<<"My name is Gulshid Zada"<<endl;
        }

};

int main()
{
        // object
        display d;
        d.name();

}
