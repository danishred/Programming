// Swap all odd and even bits

#include <iostream>
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

int main()
{
    unsigned int n;
    cin >> n;
    swap(n);
    return 0;
}
