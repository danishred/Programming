//
#include <stdio.h>
#include <math.h>

int main()
{
    typedef struct
    {
        int votes;
    } candidate;

    candidate a, b, temp;

    a.votes = 2;
    b.votes = 5;

    temp = a;
    a = b;
    b = temp;

    printf("%d\n", a.votes);
    printf("%d", b.votes);
}
