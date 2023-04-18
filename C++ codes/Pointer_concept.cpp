
#include <iostream>
using namespace std;

int main()
{
    int a[3] = {11, 2, 6};
    int *p = a;
    cout << *p << endl;
    p++; // means the same
    cout << *p << endl;
    *p++; // means the same, ++*p would increase value
    cout << *p << endl;
    *p = *p + 3;
    cout << *p << endl;

    short num[3][2] = {2, 5, 11, 17, 23, 28};

    // increases address//
    printf("%d,%d,%d\n", num, (num + 1), (num + 2));

    // either use double dereference of brackets to get the value
    printf("%d,%d,%d,%d,%d,%d\n", *(num), **(num), (num)[0], (num)[0][0], **(num + 1), *(num + 2)[0]);

    int x = 10;

    // we can do the same with variable
    printf("%d,%d,%d,%d,%d", (x), *(&x), (&x)[0], (x + 1), *(&x + 1));

    return 0;
}
