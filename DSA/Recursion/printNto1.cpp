// Print all numbers upto n (Tail recursion)
 
#include <iostream>
using namespace std;

// mine
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
// Auxiliary Space: Θ(1) or O(n) since tail recursion
// so no auxiliary overhead in modern compilers

int main()
{
    int n;
    cin >> n;
    printToN(n);
    return 0;
}
