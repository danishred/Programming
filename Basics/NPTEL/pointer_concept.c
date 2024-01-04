#include <stdio.h>
int main()
{
	short num[3][2] = {2, 5, 11, 17, 23, 28};

	//increases address//
	printf("%d,%d,%d\n",num,(num + 1),(num + 2)); 
	
	//either use double dereference of brackets to get the value
	printf("%d,%d,%d,%d,%d,%d\n",*(num),**(num),(num)[0],(num)[0][0],**(num + 1),*(num + 2)[0]);
	
	int x = 10;

    // we can do the same with variable
	printf("%d,%d,%d,%d,%d",(x),*(&x),(&x)[0],(x + 1),*(&x + 1));

    
    return 0;
}