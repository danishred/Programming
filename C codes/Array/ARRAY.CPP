#include<stdio.h>
#include<conio.h>
int main()
{
  int avg,sum=0;
  int i;
  int marks[4];  clrscr();
  for(i=0;i<=2;i++)
  {
    printf("\nEnter marks\n");
    scanf("%d",&marks[i]);
  }
  for (i=0;i<=2;i++)
    sum = sum + marks[i];
    avg = sum / 3;
    printf("\nAverage marks=%d\n",avg);
    getche();
    return 0;
}
