//

#include <iostream>
using namespace std;

// Sir's (Circle position begins with 0)
int josephus(int n, int k)
{
    if (n <= 1)
        return 0;
    return (josephus(n - 1, k) + k) % n ;
}
// Time Complexity: Θ(n)
// Auxiliary Space: Θ(n)

// Add this function to begin circle from 1
int myjosephus(int n, int k)
{
    return josephus(n, k) + 1;
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << myjosephus(n, k) << endl;
    return 0;
}
