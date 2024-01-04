//Find Factorial of a number using function
//Factorial of n using function
#include<stdio.h>
int factorial(int k); // No need to define variable 'K' (Probably)
int main()
{
int n,f;
printf("\nEnter a number whose factorial is to be found:");
scanf("%d",&n);
f=factorial(n);
printf("\nFactorial of %d!=%d",n,f);
return 0;
}
//--------------
int factorial(int n)
{
if (n == 0)
return 1;
else
return(n * factorial(n-1)); //Operation is done here and factorial n-1 goes in loop till value becomes n = 0 ; like for 4 it would do 4*3*2*1*1 to get 24 as the answer
}
