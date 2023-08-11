#include<stdio.h>
int main()
{
int a;

printf("Please enter your age\n\n");
scanf("%d",&a);

if (a>=18)
printf("\nYou are eligible for voting");

else
printf("\nYou are not eligible for voting");

return 0;
}
