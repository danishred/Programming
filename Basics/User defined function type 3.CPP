#include<stdio.h>

int add(int a,int b) // User defined function (doesn't work without main) no need of void
{ // Type 3: with argument with return value
printf("\nEnter any two numbers\n");
scanf("%d%d",&a,&b);
return a+b; //Operation is done in return in functions with return with return value
}

main()
{
//function call
int x,y,c;
//Method 1
c=add(x,y);
printf("%d",c);// Using variable
//Method 2
printf("%d",add(x,y));// using the function directly
}






 

