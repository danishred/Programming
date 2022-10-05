//
#include <iostream>
using namespace std;

int main()
{
    int n,m=0;
    cout<<"please enter the number\n";
    cin>>n;
    for(int i=1;i<=n;++i)
    {
        if (n%i==0)
        {
            m=m+1;  
        }
        
    }

    if (m>2)
    {
        cout<<"Number is not a prime";
    }
    else
    {
        cout<<"Number is a prime";
    }
       
    return 0;
}
