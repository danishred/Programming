#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,num[20]; //This variable num can now have 20 elements
clrscr();
printf("Enter the size of Array\n\n");/*here we can choose how many
				       elements we wish num to hold*/
scanf("%d",&n);
printf("\nEnter the elements one by one\n\n");
for(i=0;i<n;i++)
scanf("%d",&num[i]); /* At first we are assigning to num[0] any value
and one by one to every other subscript*/
printf("\nArray is \n");
for (i=0;i<n;i++)
printf("num[%d]=%d\n",i,num[i]);
getche();
}