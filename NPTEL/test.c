

#include <stdio.h>
#define A 5
#define B 8
#define C 2

int main()

{

	int(*x)[A][B][C];
	printf("%ld", sizeof(*x));
	return 0;
}
