//program to check for 3 digits armstrong 0, 1, 153, 370, 371, 407
#include<iostream>
using namespace std;

main()
{
    int n,sum=0,m,r;

    cout<<"Enter the number you want to check whether it is an Armstrong or not\n"; 
    cin>>n;
    m=n;

    while (n>0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r*r;
    }

    if(m==sum)
    {
        cout<<"Number you entered is an armstrong";
    }

    else
    {
        cout<<"Number is not armstrong";
    }

    return 0;
}
