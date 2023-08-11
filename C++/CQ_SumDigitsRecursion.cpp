#include <iostream>
#include <cstdio>
#include <cmath>
// Include headers as needed

using namespace std;
int sumofdigits(int num)
{
    int digit, result;
    if (num == 0)
        return 0;
    digit = num % 10;
    result = digit + sumofdigits(num / 10);
    return result;
}
int main()
{
    int n, T, sum;
    cin >> T;
    while (T--)
    {
        cin >> n;
        sum = sumofdigits(n);
        cout << sum << endl;
    }
}