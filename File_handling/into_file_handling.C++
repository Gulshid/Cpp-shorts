/*
____________________________
File handling ?
____________________________
ifstream (Input File Stream):
        ifstream is used to read data from a file.

Uses:
Open an existing file
Read text or data from a file


________________________________
ofstream (Output File Stream):
    ofstream is used to write data to a file.

Uses:
Create a new file
Write data to a file


_____________________________
ifstream → Read from file
ofstream → Write to file
______________________________

File Handling Structure:
Open → Operation → Close

______________________________
Basic Operations in File Handling:
    Read data from a file
    Write data to a file
    Append data to a file
   Update / Modify file content 
_______________________________
format of file :
.txt → Text file
.dat → Data file
.csv → Comma-separated values
.log → Log file
.pdf -> pdf file
*/ 

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    // ofstream  hello("hello_file.pdf");//   ====> create and write the file
    // ifstream hello("hello_file.pdf"); //   ====> Read the file

    ofstream value("create_file.pdf");

}