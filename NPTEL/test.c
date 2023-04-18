#include <stdio.h>
int main()
{
	short num[3][2] = {2, 5, 11, 17, 23, 28};
	
	//increases address//
	printf("%d,%d,%d\n",num,(num + 1),(num + 2)); 
	
	//either use double dereference of brackets to get the value
	printf("%d,%d,%d,%d,%d,%d",*(num),**(num),(num)[0],(num)[0][0],**(num + 1),*(num + 2)[0]);
	
	return 0;
}