//
#include <iostream>
using namespace std;

int main()
{
    int y = 0;
    int A[] = {4, 8, 6, 9, 5, 2, 7};
    for (int i = 0; i < 5; i++)
    {
        if (y < A[i])
        {
            y = A[i];
        }
    }
    cout << y;

    return 0;
}
