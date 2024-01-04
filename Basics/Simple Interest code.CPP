#include<stdio.h>
#include<conio.h>
int main()

{
/*p is principal, n is number of years,
r is rate of interest
and si is simple interest*/

clrscr();
int p,n;
float r,si;

p=1000;
n=3;
r=8.5;

/*formula for simple interst*/

si=p*n*r/100;
printf("%f\n",si);
getche();
return 0;

}
