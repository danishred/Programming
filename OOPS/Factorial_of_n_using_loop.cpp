/*Program to find factorial of n using loop
if the data type is taken long long then factorial will work upto 20!
if you want beyond 20! then take a string and write own procedure
to calculate factorial.*/

#include <iostream>
using namespace std;

int main()
{
    int n,fac=1;

    cout<<"\nEnter the number you want to find the factorial of\n";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        fac*=i;
    }
    
    cout<<"\nFactorial of "<<n <<"=" <<fac;

    return 0;
}