// Task 1:  Create , Write and Read Operation in File Handling
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // 1. Create a file
    ofstream file_1("practise.txt");

    // condition if file present
    if(!file_1)
    {
        cout<<"File not found in Folder"<<endl;
    }


    // 2. Write Operation 
    file_1 << "*** Welcome ***\n";

    file_1 <<"Hello World\n";

    int x = 2, y = 4;
    file_1 <<"Additon of two value is :"<<x + y<<endl;

    file_1.close();

    // 3. Read Operation

    ifstream file_2("practise.txt");

    // condition 
    if(!file_2)
    {
        cout<<"FIle not found in folder"<<endl;
    }

    string line;
    while(getline(file_2,line))
    {
        cout<<line<<endl;
    }
    file_2.close();

}