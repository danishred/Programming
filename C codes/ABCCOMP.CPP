#include<stdio.h>
int main()
{
int a,b,c;

printf("Enter 3 numbers to check whether they are equal or not\n\n");
scanf("%d%d%d",&a,&b,&c);

{if (a>b || a>c) 

   {if (a>b && a<c)
    printf("\na is greater than b and smaller than c");
    else if (a<b && a>c)
    printf("\na is smaller than b and greater than c");
	else
    printf("\na is the largest"); }

else
printf("\na is the smallest"); }

{if (b>a || b>c)

   {if (b>a && b<c)
    printf("\nb is greater than a and smaller than c");
    else if (b<a && b>c)
    printf("\nb is smaller than a and greater than c");
    else
    printf("\nb is the largest"); }

else
printf("\nb is the smallest"); }

{if (c>b || c>a)

   {if (c>b && c<a)
    printf("\nc is greater than b and smaller than a");
    else if (c<b && c>a)
    printf("\nc is smaller than b and greater than a");
    else
    printf("\nc is the largest"); }

else
printf("\nc is the smallest"); }

return 0;

}




