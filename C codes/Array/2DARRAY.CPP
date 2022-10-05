#include<stdio.h>
#include<conio.h>
int main()
{
int i,j,arr[15][15];
clrscr();
for(i=0;i<3;i++)
for(j=0;j<3;j++)
scanf("%d",&arr[i][j]);//This automatically asks for the next input in the next line
clrscr();
printf("The Arrays are:-\n\n");
for(i=0;i<3;i++)
 {
  printf("\t");
  for(j=0;j<3;j++)
 {
 printf("\t%d",arr[i][j]);
   }
  printf("\n");
 }

return 0;
}
