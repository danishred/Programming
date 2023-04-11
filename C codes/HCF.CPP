#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
int a,b,i,HCF;
printf("Write any two Numbers to find their HCF or GCD\n");
scanf("%d%d",&a,&b);
for (i=1;i<=a||i<=b;i++)
{
if(a%i == 0 && b%i == 0)
HCF = i; //Last updated to 4. Hence value is 4.
}
printf("HCF=%d",HCF);
return 0;
}

