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
    int value ;
    cout<<"Enter the value for Number of Row That you want :";
    cin>>value;


    for(int a = value; a >=1; a--)
    {
        for(int b =1; b<=a; b++)
        {
            cout<<b<<" ";
        }
        cout<<endl;
    }
}





/*
                Pattern No 2
*****                           12345
****            or              1234
***                             123
**                              12
*                               1


*/

