#include <stdio.h>
int main()
{
    int array[100], n, c;
    scanf("%d", &n); // n is number of elements in the array.
    for (c = 0; c < n; c++)
    {
        scanf("%d", &array[c]);
    }

    int temp;

    for (int i = 0; i < n / 2; i++)
    {
        temp = array[i];
        array[i] = array[n - i - 1];
        array[n - i - 1] = temp;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", array[i]);
    }

    return 0;
}
