#include<stdio.h>

#include<math.h>
#include<string.h>

       //Size of Data types - sizeof() Operator can be used

int main()
{
  int a=5;
  float b = 1.1;
  double c = 1.110;
  char ch = 'A';
  char name [50] = "I am hereby to learn data types and their sizes"; //Initializer is given in [] brackets
  
  printf("\n Integer value is = %d",a);
  printf("\n Float value is = %f",b);
  printf("\n Double value is = %lf",c);
  printf("\n Character value is = %c",ch);
  printf("\n value of string = %s",name);
  return 0;
}

