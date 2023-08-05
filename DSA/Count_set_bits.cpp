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
        if (n % 2 != 0)
            res++;
        n = n / 2;
    }
    cout << res << endl;
}

// Time Complexity:Θ(d) | d is number of bits from last bit to msb 
// Auxiliary Space:O(1) 
