//                      3. APPEND OPERATION
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream f("create_file.txt", ios :: app);
    f<<"HEllo WOrld"<<endl;

    int x, y;
    cout<<"Enter the value for x and y :";
    cin >> x >> y;

    f<<"The add of two value is :"<< x + y<<endl;
    cout<<"Successfully appended the information ===>"<<endl;
}
