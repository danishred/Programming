#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c;                                                  //unsigned and 2 Bytes (+a,-b etc are signed)																																																																		;
printf("Enter the values for the variables a and b \n\n");  //Output statement
scanf("%d%d",&a,&b);                                        //It is read or input statement which reads into the memory
c=pow(a,b); // a to the power b
printf("%d to the power %d is %d",a,b,c);
return 0;
}
							    //keywords in this program: main,clrscr,return,printf,scanf,getche.
							    //constants are called literals
