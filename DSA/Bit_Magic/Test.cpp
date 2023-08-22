// Binary to Gray code conversion

#include <iostream>
using namespace std;

int greyConverter(int n)
{
    int res = 0;
    for (int i = 31; i >=0; i--)
    {
        if ((n & (n>>i)) == 1)
        res = res | n&-n
        n >> 1;
    }
}

int main()
{
    int n;
    cin >> n;
    cout << greyConverter(n) << endl;

    return 0;
}
