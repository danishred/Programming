#include<stdio.h>
#include<conio.h>
int main()
{
int n,a,i;
clrscr();
printf("Enter a number\n");
scanf("%d",&n);
for (i=1;i<=10;i++)
{
a=n*i;
printf("\n%d=%d*%d",a,n,i);
}
getche();
return 0;
}