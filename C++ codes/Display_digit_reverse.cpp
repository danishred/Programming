//Display digits of a number in reverse
#include<iostream>
using namespace std;

int main()
    {
        int digit,n;
        
        cout<<"\nEnter a number\n";
        cin >> n;

        while(n>0)
        {
            digit=n%10;
            n/=10;
            cout<<digit;
        }
    
        return 0;
    }


