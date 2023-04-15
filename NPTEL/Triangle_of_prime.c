#include <stdio.h>
int prime(int num); // Function to find whether the number is prime or not.
int main()
{
    int lines;
    scanf("%d", &lines); // Number of lines of the triangle is taken from test data.
    int k = 2;
    // use the printf statement as printf("%d\t", variable_name); to print the elements in a row

    for (int i = 1; i <= lines; i++)
    {
        for (int j = 0; j < i; j++)
        {
            while (!prime(k))
            {
                k++;
            }
            printf("%d ", k);
            k++;
        }
        printf("\n");
    }
}

int prime(int num)
{

    if (num == 2)
    {
        return 1;
    }

    for (int i = 2; i <= num / 2; i++)
    {
        if (num % i == 0)
        {
            return 0;
        }
    }

    return 1;
}
