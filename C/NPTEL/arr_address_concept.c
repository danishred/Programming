#include <stdio.h>
int fun(int arr[])
{
    printf("%u\n", arr);
    arr = arr + 1;
    printf("%u\n", arr);
    printf("%d\n", arr[0]);
}

int main(void)
{
    int arr[3] = {5, 10, 15};
    fun(arr);
    // here changing the ADDRESS of arr in fun doesn't have any effect
    printf("%u\n", arr);
    printf("%d\n", arr[0]);
    printf("%d\n", arr[1]);
}