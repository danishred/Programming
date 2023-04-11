#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,t,num[20];
clrscr();
printf("Enter the size of Array\n\n");
scanf("%d",&n);
printf("\nEnter the elements one by one\n\n");
for(i=0;i<n;i++)
scanf("%d",&num[i]);
for(i=0;i<n;i++)
 {for(j=i+1;j<n;j++)
  {if(num[i]>num[j])
   {t=num[i];
   num[i]=num[j];
   num[j]=t;
   }}
   }
printf("\nArray is\n\n");
for(i=0;i<n;i++)
printf("num[%d]=%d\n",i,num[i]);
getche();
}