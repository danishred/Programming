//Passing array to function
//display array elements within the main program(driver) and in function also
#include<stdio.h>
void func(int *arr,unsigned int n) // "*arr" this is how we pass an array to a func. "*" here is called pointer
//pointer points address of another variable
{
	int i;
	for (i=0 ;i<n; i++)
	printf("%d",arr[i]);
}
int main()
{
	int arr[]={1,2,3,4,5,6,7,8};
    int n;
    int i;
	n = sizeof(arr)/sizeof arr[0];
	func(arr,n);
	for (i=0;i<n;i++)
	{
		printf("\n%d\t",arr[i]);
	}
	return 0;
}
