//
#include <iostream>
using namespace std;

int main()
{

    long int fibo[72];
    int n;
    cin>>n;

    fibo[0] = 0;
    fibo[1] = 1;

    for (int i = 2; i <= n + 1; i++)
    {
        fibo[i] = fibo[i - 1] + fibo[i - 2];
    }
    for (int j = 0; j < n; ++j)
    {
        cout << fibo[j] << endl;
    }
}