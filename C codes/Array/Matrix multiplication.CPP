//Multiplication of Two Matrices
#include<stdio.h>
#include<conio.h>
int main()
{
int a[5][5],b[5][5],c[5][5],i,j,k,sum=0,m,n,o,p;
clrscr();
printf("\nEnter number of rows and columns of first matrix\n");
scanf("%d %d", &m,&n);
printf("\nEnter number of rows and columns of first matrix\n");
scanf("%d %d", &o,&p);
if (n != o)
{
   printf("\nMultiplcation of matrices is not possible");
   printf("\nColum of first must be same as row of second matrix");
}
else
{
   printf("\nEnter the first matrix\n");
   for(i=0;i<m;i++)
   for(j=0;j<n;j++)
      scanf("%d",&a[i][j]);
   printf("\nEnter second matrix\n");
   for(i=0;i<o;i++)
   for(j=0;j<p;j++)
      scanf("%d",&b[i][j]);
   printf("\nThe First Matrix is\n");

   for(i=0;i<m;i++)
   {
      printf("\n");
      for(j=0;j<n;j++)
      {
	  printf("%d\t",a[i][j]);
      }
   }
    printf("\nThe Second Matrix is\n");


   for(i=0;i<o;i++)
   {
      printf("\n");
      for(j=0;j<p;j++)
      {
	  printf("%d\t",b[i][j]);
      }
   }
    for(i=0;i<m;i++)
    for(j=0;j<p;j++)
       c[i][j] = 0;
     for(i=0;i<m;i++)
    {//row of first matrix
	for(j=0;j<p;j++)
	{ //column of second matrix
	   sum=0;
	   for(k=0;k<n;k++)

	      sum=sum+a[i][k]*b[k][j];
	      c[i][j]=sum;
	     }
	 }
     }
printf("\nThe Multiplication of two matrices is \n");
 for(i=0;i<m;i++)
   {
      printf("\n");
      for(j=0;j<p;j++)
      {
	  printf("%d\t",c[i][j]);
      }
   }
getche();
return 0;
}