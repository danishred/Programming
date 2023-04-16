#include <stdio.h>
int main()
{
    int c, n, search,
        array[100];
    scanf("%d", &n); // number of elements in the array

    for (c = 0; c < n; c++)
        scanf("%d", &array[c]);

    scanf("%d", &search); // The element to search is read from test case.

    /* Use the printf statements as below:
     printf("%d found at location %d.\n", search, variable_name);
     printf("Not found! %d isn't present in the list.\n", search);
    */
    int l = array[0];
    int r = array[n - 1];
    int mid = 0;

    while (1)
    {

        mid = (l + r) / 2;

        if (search == array[mid])
        {
            printf("%d found at location %d.\n", search , mid);
            break;
        }

        if (search < array[mid])
        {
            r = mid - 1;
        }

        if (search > array[mid])
        {
            l = mid + 1;
        }

        if (l >= r)
        {
            printf("Not found! %d isn't present in the list.\n", search);
            break;
        }
    }
}