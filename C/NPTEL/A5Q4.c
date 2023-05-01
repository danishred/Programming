
#include <stdio.h>

int main()
{
    int i = 0;
    int j = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i > 0)
                continue;
            printf("Hello \n");
        }
    }
}
