#include <stdio.h>
void merge(int a[], int m, int b[], int n, int sorted[]);
int main()
{
    int a[100], b[100], m, n, c, sorted[200];

    /* a[100] and b[100] are the two given arrays and m and n are the their respective sizes. c is a counter
    and sorted[200] is the final sorted array */

    scanf("%d", &m); // Number of elements in the first array

    for (c = 0; c < m; c++)
    {
        scanf("%d", &a[c]); // Elements of first array is read
    }

    scanf("%d", &n); // Number of elements in second array

    for (c = 0; c < n; c++)
    {
        scanf("%d", &b[c]); // Elements of second array is read
    }
    merge(a, m, b, n, sorted);

    // The merged function is called where the two arrays are merged and sorted.

    printf("Sorted array:\n");

    for (c = 0; c < m + n; c++)
    {
        printf("%d\n", sorted[c]);
    }

    return 0;
}

void merge(int a[], int m, int b[], int n, int sorted[])
{
    int i = 0, j = 0;
    for (int c = 0; c < m + n; c++)
    {
        if (a[i] <= b[j])
        {
            sorted[c] = a[i];
            i++;
        }
        else
        {
            sorted[c] = b[j];
            j++;
        }
    }
}
