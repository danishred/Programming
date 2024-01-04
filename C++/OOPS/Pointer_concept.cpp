
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

    short num[4][2] = {2, 5, 11, 17, 15, 28, 4, 6};

    // increases address//
    printf("%d,%d,%d\n", num, (num + 1), (num + 2));

    // either use double dereference or brackets to get the value
    printf("%d,%d,%d,%d,%d,%d,%d,%d,%d\n", *(num), **(num), (num)[0], (num)[0][0], **(num + 1),
           *(num + 2)[0], *(*(num + 2) + 1), num[2][0], *(num)[1]);

    // *(num+1)[1]=*(*((num+1)+1))=*(*(num+2))=*(num[2])=num[2][0]=15And**(num+2)=*(num[2]+0)=num[2][0]=15
    printf("%d,%d,%d\n",*(num+1)[1],*(num)[1],*(num+2)[1]);

    int x = 10;

    // we can do the same with variable
    printf("%d,%d,%d,%d,%d", (x), *(&x), (&x)[0], (x + 1), *(&x + 1));

    return 0;
}
