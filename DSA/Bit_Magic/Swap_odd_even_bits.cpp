// Swap all odd and even bits

#include <iostream>
#include <vector>
using namespace std;

void swap(unsigned int n)
{

    unsigned int x, y, res = 0;

    for (int i = 0; i < 31; i += 2)
    {
        x = n;

        x = x >> i;

        if ((x & 1) == 1)
        {
            // all are unset except the first set bit
            x = x & -x;
            x = x << i + 1;
        }
        else
        {
            x = 0;
        }
        res = res | x;

        y = n;
        y = y >> i + 1;

        if ((y & 1) == 1)
        {
            // all are unset except the first set bit
            y = y & -y;
            y = y << i;
        }
        else
        {
            y = 0;
        }

        res = res | y;
    }
    cout << endl
         << res << endl;
}

// Function to swap odd and even bits
// GFGs
void swapBits(unsigned int n)
{
    // Your code here
    vector<int> v;
    while (n > 0)
    {
        v.push_back(n % 2);
        n = n >> 1;
    }
    v.push_back(0);
    for (int i = 0; i < v.size() - 1; i += 2)
    {
        swap(v[i], v[i + 1]);
    }
    unsigned int ans = 0;
    unsigned int bit = 1;
    for (int i = 0; i < v.size(); i++)
    {
        ans += bit * v[i];
        bit *= 2;
    }
    cout << endl
         << ans << endl;
}
// Time Complexity: O(logN), 
// Conversion of decimal to binary and binary to decimal takes logN time.
// Auxiliary Space: O(logN),
// LogN space takes vector to store the bits of given number.

int main()
{
    unsigned int n;
    cin >> n;
    swap(n);
    swapBits(n);
    return 0;
}
