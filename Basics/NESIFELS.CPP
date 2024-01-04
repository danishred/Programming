#include<stdio.h>

int main()
{

int a,b;

printf("Please enter value of 'a' and 'b'\n\n");
scanf("%d%d",&a,&b);

if (a!=b)
      {
       printf("\n'a' is not equal to 'b'");

	if (a>b)
       printf("\n'a' greater than 'b'");

	else
       printf("\n'a' is smaller than 'b'");
      }
else
printf("\n'a' is equal to 'b'");


return 0;
}
