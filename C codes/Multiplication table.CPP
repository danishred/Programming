#include<stdio.h>

int main()
{
int n,a,i;

printf("Enter a number\n");
scanf("%d",&n);
for (i=1;i<=10;i++) //two semicolons task done first then after returning the third one is done in the loop.
{
a=n*i;
printf("\n%d=%d*%d",a,n,i);
}

return 0;
}
