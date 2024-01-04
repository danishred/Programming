//Factors of N
#include<iostream>
using namespace std;

int main()
    {
        int n,i,j=0;

        cout<<"\nEnter the number you want to find the factors of and check for whether ";
        cout<<"it is a prime or not\n";
        cin>>n;
        cout<<"\nThese are the factors of "<<n<<"\n";
        
        for(i=1;i<=n;++i)
        {
            if(n%i==0)
            {
                cout<<i<<" ";
                ++j;
            }
        }
        
        cout<<"\n";

        if(j==2)
        {
            cout<<n<<" is a prime number";
        }
        else
        {
            cout<<n<<" is not a prime number";
        }

        return 0;
    }


