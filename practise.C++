/*
                Pattern No 1
    *                               1
    **                              12
    ***                 or          123 
    ****                            1234
    *****                           12345        

*/

#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"Enter the value for num:";
    cin>>num;


    for(int i =1; i <= num; i++) // for row 
    {
        for(int j = 1; j <= i; j++ ) // for displaying the *
        {
            // cout<<"*";
            cout<<j<<" ";
        }
        cout<<endl;
    }



/*
                Pattern No 2
*****                           12345
****            or              1234
***                             123
**                              12
*                               1


*/

    int n;
    cout<<"Enter the value for n :";
    cin>>n;

    for(int a = n; a>=1; a--) // for row 
    {
        for(int b = 1; b <= a; b++) // for displaying the * or digits
        {
            // cout<<"*";
            cout<<b<<" ";
        }
        cout<<endl;
    }
}


/*
            *
           ***
          *****
         *******
        *********

    */

#include<iostream>
using namespace std;

int main()
{
    int number;
    cout<<"Enter the value for number:";
    cin>>number;


    for(int i = 1; i<=number;  i++)
    {
        // for spaces
        for(int j = 1; j<=number-i;  j++)
        {
            cout<<" ";
        }

        // for Asterik (*)
        for(int z = 1; z<= 2 * i - 1; z++)
        {
            cout<<"*";
        }

        cout<<endl;
    }
}



