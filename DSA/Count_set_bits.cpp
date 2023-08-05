// Count_set_bits

#include <iostream>
#include "supplement.h"
using namespace std;

void csb_op(int n)
{
    int res = 0;
    while (n != 0)
    {
        n = n & (n - 1);
        res++;
    }
    cout << res << endl;
}

void csb_naive(int n)
{
    int res = 0;
    while (n != 0)
    {
        // if (n % 2 != 0)
        //     res++;
        res = res + (n & 1);
        n = n / 2;
    }
    cout << res << endl;
}

int main()
{
    int n;
    cin >> n;
    csb_naive(n);
    csb_op(n);
}

// Time Complexity:Θ(d) | d is number of bits from last bit to msb
// Auxiliary Space:O(1)
