#include<stdio.h>

add(int a,int b) // User defined function (doesn't work without main) no need of void
{ // Type 2: with argument no return
int c;
printf("\nEnter any two numbers\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("%d",c);
}

main()
{
//function call
int x,y;   //we can use printf and scanf at this stage also
add(x,y);
}






 

