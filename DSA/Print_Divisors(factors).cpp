//Print Divisor (Factors)

#include <iostream>
using namespace std;

// Sir's Efficient sorted

// Here, if you count it is still taking exactly
// exactly the same number of steps as in SE we
// were doing n/i inside the loop and we are doing 
// that seperately here to sort.
void SE_Print_Divisor_sorted(int n)
{
    int i;

    for (i = 1; i * i < n; i++)
    {
        if (n % i == 0)
        {
            cout << i << " ";
        }
    }

    for (i; i >= 1; i--)
    {
        if (n % i == 0)
        {
            cout << n/i << " ";
        }
    }

}
// Time Complexity:O(sqrt(n))
// Auxiliary Space:O(1)


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
    SE_Print_Divisor_sorted(n);
    cout << endl;
    M_Print_Divisor(n);
    cout << endl;
    ME_Print_Divisor(n);
    cout << endl;
    SE_Print_Divisor(n);
    return 0;
}
