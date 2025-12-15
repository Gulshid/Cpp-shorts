//                    2.  READ OPERATION
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ifstream file_2("create_file.txt");

    if(!file_2)
    {
        cout<<"FIlE NOT FOUND "<<endl;
    }

    string line;

    while(getline(file_2, line))
    {
        cout<<line<<endl;
    }

    file_2.close();
}