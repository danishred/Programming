// Digits in factorial of a number

// Time: not sure but seems like theta(nlogn)
// Space:BigO(1)
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    int digits;
    long long int fact = 1;
    double sum = 0;

    for (int i = 1; i <= N; ++i)
    {
        sum += (log10(i));
    }

    digits = floor(sum) + 1;
    cout<<digits<<" "<<sum<<endl;
    return 0;
}
