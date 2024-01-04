#include<stdio.h>

int main()
{

int Danish2,Nilofer;
printf("Enter age of Danish 2\n");
scanf("%d",&Danish2);
printf("\nEnter age of Nilofer\n");
scanf("%d",&Nilofer);
if (Danish2>Nilofer)
{
printf("\nDanish2 is older than Nilofer");
}
else if (Danish2<Nilofer)
{
printf("\nDanish2 is younger than Nilofer");
}
else
{
printf("\nBoth Danish2 and Nilofer are of same age");
}

return 0;
}
