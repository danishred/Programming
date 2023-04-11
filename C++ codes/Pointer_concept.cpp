
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
    *p=*p+3;
    cout << *p << endl;
    return 0;
}
