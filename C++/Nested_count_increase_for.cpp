//Nested for loops
#include <iostream>
using namespace std;

int main()
{
    for(int count=0,i=1;i<=5;i++)
    {
        for(int j=1;j<=5;j++)
        {
            cout<<count<<" ";
            count++;
        }

        cout<<"\n";
    }
    return 0;
}
