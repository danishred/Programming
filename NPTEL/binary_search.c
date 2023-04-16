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
    int first = 0;
    int last = n - 1;
    int mid = 0;

    while (1)
    {

        mid = (first + last) / 2;

        if (search == array[mid])
        {
            printf("%d found at location %d.\n", search , mid+1);
            break;
        }

        if (search < array[mid])
        {
            last = mid - 1;
        }

        if (search > array[mid])
        {
            first = mid + 1;
        }

        if (first > last)
        {
            printf("Not found! %d isn't present in the 'ist.\n", search);
            break;
        }
    }
    return 0;
}