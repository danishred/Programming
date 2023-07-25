// Trailing Zeros in factorial

#include <iostream>
using namespace std;

// Naive
int trailing_zeros1(int n)
{
    int fact = 1;
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        fact = fact * (i + 1);
    }

    while (fact % 10 == 0)
    {
        count++;
        fact /= 10;
    }

    return (count);
}

// Efficient
/*Here we are dividing n by 5 then 25 and then 125 and so on, in order to find how many prime
factors AS 5 are there. The no. of prime factors as 5 are the no. of trailing zeroes.
How to count the total number of 5s in prime factors of n!? A simple way is to calculate floor(n/5).*/

int trailing_zeros2(int n)
{

    int res = 0;
    for (int i = 5; i <= n; i = i * 5)
        res = res + n / i;
    return res;
}

// Time Complexity: O(log5n)
// Auxiliary Space: O(1)

int main()
{
    int n;
    cin >> n;
    cout << trailing_zeros2(n)<<endl;
    return 0;
}
