// *** STUDENT DETAILS SYSTEM ***
#include<iostream>
using namespace std;

class STUDENT
{
    private:
    string name, depart;
    int marks, roll, semester;
    float cgpa;

    public:
    void student_input()
    {
        cout<<"Enter the Following student detail :>"<<endl;
        cout<<"Enter Your Name :";
        getline(cin, name);

        cout<<"Enter Your department :";
        getline(cin, depart);

        cout<<"Enter Your ROll No :";
        cin>>roll;

        cout<<"Enter Your Marks :";
        cin>>marks;

        cout<<"Enter Your Semester :";
        cin>>semester;

        cout<<"Enter Your CGPA :";
        cin>>cgpa;
    }

    void display_result()
    {
        cout<<"*** STudent Detail System ***"<<endl;
        cout<<"Name :"<<name<<",      Roll No:"<<roll<<",    Marks: "<<marks<<endl;
        cout<<"Department : "<<depart<<",      Semester :"<<semester<<",    CGPA :"<<cgpa<<endl;
    }
};

int main()
{
    STUDENT s3;
    s3.student_input();
    s3.display_result();

}