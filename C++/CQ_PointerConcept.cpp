#include<stdio.h>
int main()
{
 int a[]={ 1, 2, 3, 4, 5 }, *p;
 p=a;
 ++*p; //value change for pre
 *p++; //array index increment for post
 printf("%d ", *p);
 p += 2;
 printf("%d", *p);
 return 0;
}