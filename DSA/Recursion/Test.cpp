// Print all numbers upto n

#include <iostream>
using namespace std;

void printToN(int n)
{
    if (n == 0)
    {
        return;
    }
    printToN(n - 1);
    cout << n << " ";
    return;
}
// Time Complexity:Θ(n)
// Auxiliary Space: Θ(n)

int main()
{
    int n;
    cin >> n;
    printToN(n);
    return 0;
}
