#include<stdio.h>

int main()
{ //C program to read and display a string
char a [20];
printf("Please Enter your name\n");
scanf("%[^\n]",&a); // %s would only take a word not a sentence
printf("Your name is %s",a);
return 0;
}
