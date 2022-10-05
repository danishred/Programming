#include<stdio.h>
#include<conio.h>
int main()
{

int i,j, mat_a[5][5], mat_b[5][5], mat_c[5][5];
clrscr();
//read matrix A
   printf("\nThe First matrix is\n");
   for (i=0;i<=2;i++)
   for (j=0;j<=2;j++)
   scanf("\n%d",&mat_a[i][j]);
//read matrix B
   printf("\nThe second matrix is\n");
   for (i=0;i<=2;i++)
   for (j=0;j<=2;j++)
   scanf("\n%d",&mat_b[i][j]);
//Adding a and b
   for (i=0;i<=2;i++)
   for (j=0;j<=2;j++)
   mat_c[i][j]=mat_a[i][j]-mat_b[i][j];
//display sum matrix i.e mat_c
   clrscr();
   printf("\nsum of two matrices\n");
   for (i=0;i<=2;i++)
   {for (j=0;j<=2;j++)
   printf("%d\t",mat_c[i][j]);
   printf("\n");}
   getche();
   return 0;
   }



