// Constructor Overloading
#include<iostream>
using namespace std;

// Student {name, age}
class Student
{
    private:
    string name;
    int age;

    public:
    // Constructor function 1
    Student()
    {
        name = "Unknown";
        age = 0;
    }

    // Constructor function 2
    Student(string n)
    {
        name = n;
        age = 0;
    }

    // Constructor function 3
    Student(string n, int a)
    {
        name = n;
        age = a;
    }

    // display function
    void display()
    {
        cout<<"Name :"<<name<<".       Age : "<<age<<endl;
    }
};


int main()
{
    string na;
    int ag;
    cout<<"Enter Your Name :";
    getline(cin, na);

    cout<<"Enter Your Age :";
    cin>>ag;
    Student s1, s2(na), s3(na, ag);
    s1.display();
    s2.display();
    s3.display();

}