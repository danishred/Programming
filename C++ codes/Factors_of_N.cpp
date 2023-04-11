//Factors of N
#include<iostream>
using namespace std;

int main()
    {
        int n,i,j;

        cout<<"\nEnter the number you want to find the factors of\n";
        cin>>n;
        cout<<"\nThese are the factors of "<<n<<"\n";
        
        for(i=1;i<=n;++i)
        {
            if(n%i==0)
            {
                cout<<i<<" ";
                j+=1;
            }
        }
        if(j==2)
        {
            cout<<n<<"is a prime number";
        }
        else
        {
            cout<<n<<"is not a prime number";
        }

        return 0;
    }


