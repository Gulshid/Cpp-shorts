// Task : Word and Letter Count
#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main()
{
    // Read file
    ifstream file_5("practise.txt");

    string word;

    int wordCount = 0, letterCount = 0;

    while(file_5 >> word)
    {
        wordCount++;
        letterCount = letterCount + word.length();
    }

    cout<<"Total Words file :"<<wordCount<<endl;
    cout<<"Total Letters file :"<<letterCount<<endl;


}