//                  1.WRITE OPERATION and CREATE OPERATION
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // Create a file
    ofstream file_1("create_file.txt");

    string name;
    int roll, marks, age;

    cout<<"Enter Your Name :";
    getline(cin, name);

    cout<<"Enter Your ROll No :";
    cin>>roll;

    cout<<"Enter Your Age :";
    cin>>age;

    cout<<"Enter Your Marks :";
    cin>>marks;


    file_1<<"*** Student Information ***"<<endl;
    file_1<<"Name :"<<name<<endl;
    file_1<<"Roll NO :"<<roll<<endl;
    file_1<<"Age :"<<age<<endl;
    file_1<<"Marks :"<<marks<<endl;

    cout<<"The Write Operation is Successfull ===>"<<endl;

    file_1.close();

}