#include<stdio.h>
#include<string.h>

int main()
{
char str[30];
printf("Enter a statement:\n");
gets(str);
puts(str); // moves to next line and is hassle free
printf("%s\n",str); // have to write this much to get the same result
return 0;
}
