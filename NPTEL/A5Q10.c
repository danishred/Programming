#include <stdio.h>

int main()
{
    int a = 0, b;
    for (int i = 0; i < 5; i+=0.5)
    {
        a++;
        printf("inside");
        continue;
    }
    printf("%d",a);
    
}

