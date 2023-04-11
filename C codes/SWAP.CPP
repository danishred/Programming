#include<stdio.h>

int main()
{

int a,b,c;
printf("Enter any two numbers to swap them\n");
scanf("%d%d",&a,&b);
printf("Numbers before swapping a=%d and b=%d\n\n",a,b);
c=a;
a=b;
b=c;
printf("Number after swapping a=%d and b=%d\n",a,b);

return 0;
}



