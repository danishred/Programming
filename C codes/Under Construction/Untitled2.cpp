#include<stdio.h> 
int display();
int main()
{
	int var1;
	char var2[10];
	display(); /*function call*/
	//printf("Address of var1 variable is:%x\n",&var1);
	//printf("Address of var1 variable is:%x\n",&var2);
	printf("\n\nI am in main\n");	
	return 0;
}


int display() 		/*function definition*/
{					//start
	 printf("I am in function ");
	 return 0;
} 					//body ends
