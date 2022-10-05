//Perfect Numbers e.g: 6,28,496,8128
#include<iostream>
using namespace std;

int main()
    {
        int n,fac,i,sum=0;

        cout<<"\nEnter the number you want to check for being perfect\n";
        cin>>n;
        
        for(i=1;i<=n;++i)
        {
            if(n%i==0)
            {
                sum+=i;
            }
        }

        if (sum==2*n)
        {
            cout<<n<<" is a perfect number";
        }
        else
        {
            cout<<"not a perfect number";
        }
        

        return 0;
    }


