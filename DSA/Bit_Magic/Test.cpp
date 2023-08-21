// Find gray code of the decimal N and
// convert it into decimal

#include <iostream>
using namespace std;

int greyConverter(int n)
{
    int res = 0;
    for (int i = 31; i >= 0; i--)
    {
        if (((n >> i) & 1) == 1)
            {
                
            }
        n = n >> i
    }
}

int main()
{
    int n;
    cin >> n;
    cout << greyConverter(n) << endl;
    return 0;
}
