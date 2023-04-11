#include<stdio.h>
//Function is being defined (Define, declare, call)
add() // User defined function (doesn't work without main) no need of void
{ // Type 1: no argument no return
int a,b,c;
printf("Enter two number\n");
scanf("%d%d",&a,&b);
c=a+b;
printf("\n%d",c);
}

sub()
{int a,b,c;
printf("\n\nEnter two number\n");
scanf("%d%d",&a,&b);
c=a-b;
printf("\n%d",c);
}


print()
{int i;
printf("\n");
for (i=0;i<=10;++i)// for for loop ++i or i++ is the same
printf("\n%d",i);
}



main() //no need of terminator while defining or void
{
add(); //Calling function hence using terminator
//add();// this has become reusable
sub();
print();
}








/*
void sub()
{
int a,b,c;
printf("\nEnter any two numbers\n");
scanf("%d%d",&a,&b);
c=a-b;
printf("%d",c);
}
void print()
{
int i;
for(i=0;i<10;i++)
{
printf("\n\n%d",i);
}
}

/*main()
{//function call
clrscr();
*/

