#include <stdio.h>
#include <string.h>

/*strcmp() function returns

an int less than 0 if s1 comes before s2,
0 if s1 is the same as s2,
an int greater than 0 if s1 comes after s2.
The strings are compared using “ASCIIbetical” or "dictionary"order, 
based on the ASCII values of their characters.
For instance, "AAA" would come before "BBB", and "AAA" would also come before "aaa".*/

int main()
{
	char str[5][50], temp[50];
	printf("Enter 5 words: ");
	// Getting strings input
	for (int i = 0; i < 5; ++i)
	{
		fgets(str[i], sizeof(str[i]), stdin);
	}

	// storing strings in the lexicographical order
	for (int i = 0; i < 5; ++i)
	{
		for (int j = i + 1; j < 5; ++j)
		{

			// swapping strings if they are not in the lexicographical order
			if (strcmp(str[i], str[j]) > 0)
			{
				strcpy(temp, str[i]);
				strcpy(str[i], str[j]);
				strcpy(str[j], temp);
			}
		}
	}

	printf("\nIn the lexicographical order: \n");
	for (int i = 0; i < 5; ++i)
	{
		fputs(str[i], stdout);
	}
	return 0;
}

/*R programming
JavaScript
Java
C programming
C++ programming*/