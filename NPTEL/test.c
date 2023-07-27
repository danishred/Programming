#include <stdio.h>

void swap(int *x, int *y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubble_sort(int x[], int n)
{

    int i, j;
    for (i = 1; i < n ; i++)
        for (j = 0; j < n - 1 - i; j++)
            if (x[j] > x[j + 1])
            {
                swap(&x[j], &x[j + 1]);
            }
}

int main(int argc, char *argv[])
{
    int x[] = {-45, 89, -65, 87, 0, 3, -23, 19, 56, 21, 76, -50};
    int i;
    for (i = 0; i < 12; i++)
        printf("%d ", x[i]);
    printf("\n");
    bubble_sort(x, 12);
    for (i = 0; i < 12; i++)
        printf("%d ", x[i]);
}