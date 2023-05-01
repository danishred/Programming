/*Write a program to find the length and reverse a 
given string using string library function*/

#include<stdio.h>
#include<string.h>
int main ()
{
	char r[100];
	int l;
	printf("Enter any sentence:\n");
	gets(r);
	printf("\nThe sentence you entered is:\n");
	puts(r);
	l=strlen(r);
	printf("Lenght of string is:\n%d",l);
	printf("\nThe reverse of the string is:\n%s",strrev(r));
	return 0;
}
