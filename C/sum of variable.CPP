#include<stdio.h>
#include<conio.h>
void main()           //start
{
int a,b,c;            //declare abc
clrscr();             //use to clear the screen
printf("please enter any two numbers");
scanf("%d%d%",&a,&b); //input
c=a+b;                //process c=a+b
printf("The sum of two number is %d",c);       //output  (ctrl+f9)
getche();             //used to hold or control output/user screen (alt+f5)
}
