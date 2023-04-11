//
#include <iostream>
using namespace std;

double cToF(int C)
{
    // Your code here
    double f = (double) (C * 9 / 5 + 32);

    return f;
}

int main()
{
    int C = 339;
    cout << cToF(C);
    return 0;
}
