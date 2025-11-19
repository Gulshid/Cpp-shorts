//  task : find the max and min in array 
#include<iostream>
using namespace std;

int main()
{
    int max_min[5] = {3,5,2,8,12};

    int max = max_min[0];  // max = 3
    int min = max_min[0]; // min = 3

    for (int x = 1; x < 5; x++)
    {
        if (max_min[x] > max)
        {
            max = max_min[x];  // max = greater value
        }

        if (max_min[x] < min )
        {
            min = max_min[x]; // min = less value
        }
    }

    cout<<" Max value is :"<<max<<endl;
    cout<<" Min value is :"<<min<<endl;
}