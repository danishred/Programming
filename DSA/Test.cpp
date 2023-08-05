// Count_set_bits

#include <iostream>
#include "supplement.h"
using namespace std;

int main()
{
    int n = 15;
    int res = 0;
    while (n != 0)
    {
        n = n & (n-1);
        res++;
    }
    cout << res << endl;
}

// Time Complexity:Θ(d) | d is number of set bits
// Auxiliary Space:O(1)
