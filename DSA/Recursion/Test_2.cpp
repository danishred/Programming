// Lucky numbers

#include <iostream>
using namespace std;

int k = 0;

//
int lucky(int n)
{
    if (n == 1)
    {
        return 1;
    }
    k = k + 1;
    if (n % k == 0)
    {
        return 0;
    }
    n = n- k;
    lucky(n);
}   

int main()
{
    int n;
    cin >> n;
    cout << lucky(n);

    return 0;
}
