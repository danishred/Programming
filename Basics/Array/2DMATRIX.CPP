#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, row, col, a[10][10];
    printf("\nEnter the number of rows");
    scanf("%d", &row);
    printf("\nEnter the number of columns");
    scanf("%d", &col);
    for (i = 0; i < row; i++)
        for (j = 0; j < row; j++)
            scanf("%d", &a[i][j]);

    for (i = 0; i < row; i++)

    {
        printf("\n");
        for (j = 0; j < row; j++)
            printf("%d\t", a[i][j]);
    }
    getche();
    return 0;
}
