
    printf("Enter size of array:");
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", x[i]);
    }

    int i, j;

    for (i = n - 1; i > 0; i--)
        for (j - 0; j < i; j++)
            if (x[j] > x[j + 1])
         