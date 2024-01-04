#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<string.h>
       //Size of Data types - sizeof() Operator can be used

int main()
{
int a;
char b = 'A';
float c = 3.14; //float 4, double 8, long double 16, bytes taken in memory
printf("Hello You\n");
printf("\n\nCharacter value is %c and size is %d bytes\n",b,sizeof(b));
printf("\n\nSize of integer is %d", sizeof(a));
printf("\n\nSize of character is %d", sizeof(b));
printf("\n\nSize of double float %f is %lu",c,sizeof(double));
printf("\n\nSize of double float %f is %lu",c,sizeof(c));;
}

