#include<stdio.h>
#include<string.h>
int main()
{
char str[50];
int i,count,countc,len;

printf("Enter any string\n");
gets(str); //Works just as circumflex
count=0;
i=0;
while(str[i]!='\0')
{
 if(str[i]==' ')
   count++;
   i++;
}
len=strlen(str);
printf("\n\t The total number of words are %d",count+1);
printf("\n\t Length of string is:%d",len);

return 0;
}

