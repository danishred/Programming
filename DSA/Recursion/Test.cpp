// Print all numbers upto n

#include <iostream>
using namespace std;

void printToN(int n)
{
    if (n == 0)
    {
        return;
    }
    cout << n << " ";
    printToN(n - 1);
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
