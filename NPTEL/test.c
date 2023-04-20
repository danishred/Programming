#include <stdio.h>
struct p
{
    int x;
    char y;
};

int main()
{
    struct p p1[] = {1, 21, 69, 42, 64};
    struct p *ptr1 = p1;
    int x = (sizeof(p1) / 4);
    if ((x == sizeof(int) + 2 * sizeof(char)))
        printf("True");
    else
        printf("False");
    return 0;
}