#include<stdio.h>
int main()
{

int year;
printf("Enter year to check whether it is leap or not\n");
scanf("%d",&year);
if(year %4==0 && year %100!=0)
{
printf("This is a Leap Year (for years) ");
}
else if(year %400==0)
{
printf("This is a Leap Year (for centuries) ");
}
else
{
printf("This is not a leap year");
}
return 0;
}
