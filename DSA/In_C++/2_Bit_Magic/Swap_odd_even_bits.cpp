// Swap all odd and even bits

#include <iostream>
#include <vector>
using namespace std;

// Mine
void swap(unsigned int n)
{

    unsigned int x, y, res = 0;

    for (int i = 0; i < 32; i += 2)
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
// Time Complexity:Θ(32)
// Auxiliary Space:Θ(1)

// GFG 
void swapBits1(unsigned int x)
{
    for (int i = 0; i < 32; i += 2)
    {

        // Find i th bit
        int i_bit = (x >> i) & 1;

        // Find i+1 th bit
        int i_1_bit = (x >> (i + 1)) & 1;

        // Remove i_bit
        x = x - (i_bit << i)
            // Remove i+1 th bit
            - (i_1_bit << (i + 1))
            // Put i_bit at i+1 location
            + (i_bit << (i + 1))
            // Put i+1 bit at i location
            + (i_1_bit << i);
    }
    cout << endl
         << x << endl;
}
// I am doubtful of below 
// Update: I got it (loop has const value of 32)
// Time Complexity:O(1) 
// Auxiliary Space:O(1)



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

// GFG efficient
void swapBitwise(unsigned int N)
{
    // Hex values are of 4 bits
    
    // Get all even bits of x 
    unsigned int even_bits = N & 0xAAAAAAAA;

    // Get all odd bits of x
    unsigned int odd_bits = N & 0x55555555;

    // Right shift even bits
    even_bits >>= 1;

    // Left shift odd bits
    odd_bits <<= 1;

    // Combine even and odd bits
    int x = even_bits | odd_bits;
    cout << endl
         << x << endl;
}
// Time Complexity: O(1)
// Auxiliary Space: O(1)

int main()
{
    unsigned int n;
    cin >> n;
    swap(n);
    swapBits(n);
    swapBits1(n);
    swapBitwise(n);
    return 0;
}
