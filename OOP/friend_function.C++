// Friend function in OOP
#include<iostream>
using namespace std;

class student
{
    private:
    int marks;

    public:
    student()
    {
        marks = 89;
    }

    // freind function declare
    friend void showdata(student d);

};

void showdata(student d)
{
    cout<<"The Student Marks is :"<<d.marks<<endl;
}

int main()
{
    student s1;
    showdata(s1);


}