#include<stdio.h>
int main()
{
int base,exp;
long long result = 1;
printf("Enter a base number: ");
scanf("%d",&base);
printf("Enter and exponent: ");
scanf("%d",&exp);
while (exp != 0)
{
result *= base;
--exp;// this is --exp
}
printf("Answer = %lld",result);
return 0;
}
