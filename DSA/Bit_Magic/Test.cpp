// Given a number N. The task is to check 
// whether it is sparse or not. A number is said to
// be a sparse number if no two or more consecutive
//  bits are set in the binary representation.

#include <iostream>
using namespace std;

// Mine loop
int isSparse(int n)
{
    int count = 0;
    for (int i = 0; i < 31; i++)
    {
        if ((n & 1) == 1)
            count++;
        else
            count = 0;
        if (count > 1)
        {
            // Not sparse
            return 0;
        }
        n = n >> 1;
    }
    // Sparse
    return 1;
}
// Time Complexity:O(1) 
// Auxiliary Space:O(1)


// GFG
    bool isSparse2(int n)
    {
        //we perform Right shift on n by 1 bit.
        //then perform AND operation on n and n/2
        //(obtained by right shifting n by 1 bit). 
        //returning true if we get 0 as result otherwise false.
        return (n & (n >> 1)) == 0;
        
    }

int main()
{
    int n;
    cin >> n;
    cout << isSparse(n) << endl;
    cout << isSparse2(n) << endl;
    return 0;
}
