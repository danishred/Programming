//Print Divisor

#include <iostream>
using namespace std;

// Sir's Efficient
void SE_Print_Divisor(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";

            if (i != n / i)
                cout << n / i << " ";
        }
    }
}
// Time Complexity:O(sqrt(n))
// Auxiliary Space:O(1)


// Mine Efficient
void ME_Print_Divisor(int n)
{
    for (int i = 1; i * i <= n; i++)
    {
        if (i * i == n)
        {
            cout << i << " ";
            continue;
        }
        if (n % i == 0)
        {
            cout << i << " ";
            cout << n / i << " ";
        }
    }
}
// Time Complexity:O(sqrt(n))
// Auxiliary Space:O(1)

// Mine
void M_Print_Divisor(int n)
{
    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }
}
// Time Complexity:O(n)
// Auxiliary Space:O(1)


// Driver Code
int main()
{
    int n = 0;
    cout << "enter the number:" << endl;
    cin >> n;
    M_Print_Divisor(n);
    cout << endl;
    ME_Print_Divisor(n);
    cout << endl;
    SE_Print_Divisor(n);
    return 0;
}
