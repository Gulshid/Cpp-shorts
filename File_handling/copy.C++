//                      5. COPY OPERATION
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // Read ==> file 1
    ifstream file_1("create_file.txt");


    // create and copy ==> file 2
    ofstream file_2("des.txt");

    if(!file_1 || !file_2)
    {
        cout<<"File 1 or File 2 were not Found "<<endl;
    }

    string line;
    // 3 = 1 ==> 2 ===> 3
    while(getline(file_1, line))
    {
        file_2 << line <<endl;
    }

    file_1.close();
    file_2.close();
}