//i is assigned and , operator returns last value 

#include <stdio.h>

int main()
{
    int i;
    if (i = 0, 2, 3)
        printf("NPTEL");
    else
        printf("Programming on C ");
    printf("%d\n", i);
}