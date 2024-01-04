#include<stdio.h>
int main()
{
int i, sum=0, mark[30];
float avg;
//read the marks for 10 students
for (i=0;i<=9;i++)
{printf("\nEnter marks for Student %d\t",i+1);
scanf("%d",&mark[i]);}
//Calculation
for(i=0;i<=9;i++)
sum=sum+mark[i];
avg=sum/10.0;
//Calculating average
printf("\n\nAverage marks of 10 students in class \t %3.2f",avg);
return 0;
}

