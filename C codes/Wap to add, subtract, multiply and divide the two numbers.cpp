//WAP to add, substract, Multiply and divide the two numbers 

#include<stdio.h>
int main()
{
	int first, second, add, subtract, multiply;
	float divide;
	
	printf("Enter two integers\n");
	scanf("%d%d",&first,&second);
	add = first+second;
	subtract = first-second;
	multiply = first*second;
	divide = first/(float)second;
	printf ("sum = %d\n",add);
	printf ("difference = %d\n",subtract);
	printf ("multiplication = %d\n",multiply);
	printf ("division = %f\n",divide);
	
	return 0;

	
}


/*When you are executing the line:

float p = 101/100;  
…you are dividing an integer by another integer, and assigning the integer result to a float variable.

Integer 101 divided by Integer 100 is Integer 1. This is correct in C++.

You need to change either divisor or dividend to a float number to make the result a float number.

For example, all these will work:

float p = 101.0 / 100; 
float p = 101.0 / 100.0; 
float p = 101 / 100.0; 

Or you can typecast them explicitly:

float p = (float)101 / 100; 
float p = 101 / (float)100; */
