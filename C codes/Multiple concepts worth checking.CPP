#include<stdio.h>
int main()
{
int a,b,c;

printf("Enter any two Numbers\n\n");
scanf("%d%d",&a,&b);
c=a+b;

printf("\nValue of c is %d\n",c);
printf("\nValue of 'a' is not updated here %d\n",a);
printf("Value of 'a+b' without using the third variable 'c' is %d\n",a+=b);
	//From trial and error I came to the conclusion that this format updates the value of 'a' but not 'b'.
printf("\n'a=+b' is updating the value of 'a' to %d\n",a);
c=a%b;
printf("\nMod of Num is %d\n",c);
printf("Mod of Num without variable 'c' is %d\n",a%=b);

a=a+1;
printf("\nincrement of +1 to 'a' %d",a);
a++; 
printf("\npost increment of 1 to 'a' %d",a);
++a;
printf("\npre increment of 1 to 'a' %d\n",a);

a=a-1;
printf("\ndecrement of -1 to 'a' %d",a);
a--;
printf("\npost decrement of 1 to 'a' %d",a);
--a;
printf("\npre decrement of 1 to 'a' %d",a);
return 0;
}
