#include<stdio.h>
int main()
{
	int a,b,*c;
	printf("enter any two numbers\n");
	scanf("%d%d",&a,&b);
	*c=a+b;
	printf("\n%d sum\n",*c);
	*c=a-b;
	printf("%d sub",*c);
	return 0;
}
