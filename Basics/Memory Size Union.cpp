//union- memory size occupied by union is maximum; Union occupies the memory space of the largest variable present in it
#include<stdio.h>
#include<conio.h>
union Data
{
   int i;  //size is 2
   float f;   //4
   char str[5];  //3
   };
int main()
{
   union Data data;
   printf("Memory size occupied by union ie data is : %d\n",sizeof(data));
   return 0;
}


