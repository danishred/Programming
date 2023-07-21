//
#include <iostream>
using namespace std;

// BigO=n
int fact_n(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum += i;
    return sum;
}

// BigO=c
int fact_c(int n)
{
    return (n * (n + 1)) / 2;
}

int main()
{
    // cout << fact_n(100000);
    cout << fact_c(100000) << endl;
    return 0;
}