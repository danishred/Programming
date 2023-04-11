
#include<stdio.h>
#include<string.h>
int main()
{

char i,j,name[20];
printf("\nEnter the name\n\n");
scanf("%s",&name);
printf("\n");
 for(i=0;i<strlen(name);i++)
{printf("%c",name[i]);
 for(j=0;j<=i;j++) //j=0 (or resets) again when condition becomes false
{printf(" ");}
 printf("%c\n",name[i]);}

return 0;
}
