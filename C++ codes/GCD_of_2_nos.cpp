#include <iostream>
using namespace std;

/*program for finding gcd of 2 number


*/
int main()
{
    int m, n;
    cout << "enter two numbers";
    cin >> m >> n;

    while (m != n)
    {
        if (m > n)
            m = m - n;
        else if (n > m)
            n = n - m;
    }
    cout << "gcd of 2nos" << m;
    return 0;
}