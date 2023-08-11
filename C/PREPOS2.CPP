#include<stdio.h>
int main()
{
int a=5, b=2, r,m;
r=a++ + b++;      //First assign 'a+b' to 'r' then update (add 2) 'a+b'(For post increment)
m=++a + b;        //First update (add 1) 'a+b' then assign to 'm' (For pre increment)
printf("\n value of r %d",r);
printf("\n value of a %d",a);
printf("\n value of b %d",b);
printf("\n value of m %d",m);
}

// for for loop i++ or ++i is the same
