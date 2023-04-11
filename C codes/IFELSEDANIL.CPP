#include<stdio.h>
#include<conio.h>
int main()
{
clrscr();
int Danish2,Nilofer;
printf("Enter age of Danish 2\n");
scanf("%d",&Danish2);
printf("\nEnter age of Nilofer\n");
scanf("%d",&Nilofer);
if (Danish2>=Nilofer)
{
printf("\nDanish2 is older than Nilofer");
}
else
{
printf("\nDanish2 is younger than Nilofer");
}
getche();
return 0;
}