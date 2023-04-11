// Time function: This function returns the number of seconds since January 1, 1970, 00:00:00 UTC.

#include <stdio.h>
#include <time.h>

int main(void)
{
    printf("The time is now %li.\n", time(NULL));
}