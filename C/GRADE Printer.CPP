#include<stdio.h>
#include<conio.h>
int main()
{
int grade; clrscr();
printf("Please enter your grade\n\n");
scanf("%d",&grade);

if (grade>=80)
printf("\nGrade A");

else if (grade>=70)
printf("\nGrade B");

else if (grade>=60)
printf("\nGrade C");

else
printf("\nNot Yet");

getche();

return 0;

}
