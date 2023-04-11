#include<stdio.h>

int main()
{
int num1,num2;
float f1;
char s1;

//To read integer from keyboard
printf("\nenter two number\n");
scanf("%d%d",&num1,&num2);
printf("\n\nThe two numbers keyboard are:\t%d and %d",num1,num2);

//To read float or fraction number
printf("\nEnter decimal number");
scanf("\n%f",&f1);
printf("\n\nThe decimal number you entered is:\t%f",f1);

//To read a character from keyboard
printf("\nEnter a character\n");
scanf("\n%c",&s1);
printf("\nThe character you entered is: %c",s1);

return 0;
}
