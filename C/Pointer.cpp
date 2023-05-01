#include<stdio.h>
int main()
{
	int *sup; //A pointer is a variable whose value is the address of another variable, * is used to declare a pointer
	int a=10;
	sup=&a;// & is address of operator and hence it is assigning the memory location address value of variable a to sup.
	
	
	printf("\n value of a is %d",a);
	printf("\n value of address of a is %u",&a); /*We used %u here instead %d just to save on 1byte of space as we are sure the address
	of any variable is going to be positive, %u = Unsigned int.*/
	printf("\n value of pointer %u",sup); //going to be address of a
	printf("\n value of variable that we pointed sup to is %u",*sup); /*Adding * in front of any variable will take its value 
	as address of another variable and will instead show the data of variable.*/
	return 0;
}
