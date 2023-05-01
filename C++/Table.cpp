#include <iostream>
using namespace std;

int main()

//---------------------------using for loop---------------------------------------
{   
    int n,m,i;

    cout<<"Enter the number you want to see the table of (for) \n";
    cin>>n;

    for(i=1;i<=10;++i)
    {
        m=n*i;
        cout<<n<<"*"<<i<<"="<<m<<"\n";
    }

// ---------------------------using while loop

    int p=0,q;

    cout<<"Enter the number you want to see the table of (while) \n";
    cin>>q;
    
    while(p<=10)
    {
        cout<<q<<"*"<<p<<"="<<q*p<<"\n";
        ++p; 
    }

    return 0;    
}

