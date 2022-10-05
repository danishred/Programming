#include<stdio.h>
#include<string.h>

int main()
{

char str[1000],ch;
int i,frequency = 0;

printf("Enter a string\n");
gets(str);
printf("\nEnter a character to find the frequeny\n");
scanf("%c",&ch);
for (i=0;str[i] !='\0'; ++i)
{
if (ch==str[i])
++frequency;
}
printf("\n Frequency of %c=%d",ch,frequency);

return 0;
}
