#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
printf("Enter any string\n");
gets(str); //Works just as circumflex
strrev(str);
printf("\nreverse string is %s",str);
return 0;
}
