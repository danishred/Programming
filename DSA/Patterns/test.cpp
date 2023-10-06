//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter Value of n: "<<endl;
    cin>>n;

    for (int r = n; r > 0; r--)
    {
        for (int c = 1; c < r; c++)
        {
            cout<<" ";
        }
        for (int c = n-r; c >= 0; c--)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < r; c++)
        {
            cout<<" ";
        }
 
        for (int c = r; c <n; c++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }

    
    
    return 0;
}
