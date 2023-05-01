#include <stdio.h>
int main()
{
	int upper = 0, lower = 0;
	char ch[100];
	scanf(" %[^\n]s", ch);

	for (int i = 0; i < 100; i++)
	{
		if (ch[i] != '.')
		{
			if (ch[i] >= 65 && ch[i] <= 90)
			{
				upper++;
			}

			if ((ch[i]) >= 97 && ch[i] <= 122)
			{
				lower++;
			}
		}
	}

	printf("Uppercase Letters : %d\n", upper); /*prints number of uppercase letters */
	printf("Lowercase Letters : %d\n", lower); /*prints number of lowercase letters */

	return (0);
}