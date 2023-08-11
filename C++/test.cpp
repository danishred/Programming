// Linear search take order of n times while binary search takes log (n) times to find key.
#include <iostream>
using namespace std;

int main()
{
    int a[] = {45, 77, 89, 91, 94, 98, 100};
    int *ptr = a;

    cout<<*ptr++;
    cout<<*ptr;

    return 0;
}
