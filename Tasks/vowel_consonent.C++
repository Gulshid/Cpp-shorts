// Write a Program that can find the Vowel and Consonent using Switch and Break Statement
#include<iostream>
using namespace std;

int main()
{
    char alph;
    cout<<"Enter the Alphabet :";
    cin>>alph;


    switch(alph)
    {
        case 'A' : case 'a':
        case 'E' : case 'e':
        case 'I' : case 'i':
        case 'O' : case 'o':
        case 'U' : case 'u':

            cout<<"The Alphabet You are Entered :"<<alph<<" is Vowel"<<endl;
            break;

        default: cout<<"The Alphabet You are Entered :"<<alph<<" is Consonent"<<endl;
    }
}