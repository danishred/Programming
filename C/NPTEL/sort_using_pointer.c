#include <stdio.h>
int main()
{
	int a[100], i, n;
	scanf("%d", &n); // Number of elements of the array is taken from the test case data

	for (i = 0; i < n; i++)
	{
		scanf("%d", a + i); // Input the array elements
	}

	int temp;
	for (int i = 0; i < n - 1; i++)
	{
		for (int j = 0; j < n - 1 - i; j++)
		{

			if (*(a + j) > *(a + j + 1))
			{
				temp = *(a + j);
				*(a + j) = *(a + j + 1);
				*(a + j + 1) = temp;
			}
		}
	}
	printf("\n");
	//   Printing sorted array in ascending order
	for (i = 0; i < n; i++)
	{
		printf("%d\n", *(a + i));
	}
	return 0;
}

	
// 8
// 90
// 70
// 30
// -10
// -40
// 20
// 100
// 50

// without pointer (take a look)

// #include <stdio.h>
// int main()
// {
// 	int a[100], i, n;
// 	scanf("%d", &n); // Number of elements of the array is taken from the test case data

// 	for (i = 0; i < n; i++)
// 	{
// 		scanf("%d", a + i); // Input the array elements
// 	}

// 	int temp;
// 	for (int i = 0; i < n-1; i++)
// 	{
// 		for (int j = 0; j < n-1-i ; j++)
// 		{

// 			if (a[j] > a[j + 1])
// 			{
// 				temp = a[j];
// 				a[j] = a[j + 1];
// 				a[j + 1] = temp;
// 			}
// 		}
// 	}
// 	printf("\n");
// 	//   Printing sorted array in ascending order
// 	for (i = 0; i < n; i++)
// 	{
// 		printf("%d\n", *(a + i));
// 	}
// 	return 0;
// }
