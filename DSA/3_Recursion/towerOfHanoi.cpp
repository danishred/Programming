// Tower of Hanoi
#include <iostream>
using namespace std;

void TOH(int n, char A, char B, char C)
{
    if (n == 1)
    {
        // B as Auxiliary
        cout << "Move 1 from " << A << " to " << C << endl;
        return;
    }
    // C as Auxiliary
    TOH(n - 1, A, C, B);
    cout << "Move " << n << " from " << A << " to " << C << endl;
    // A as Auxiliary
    TOH(n - 1, B, A, C);
}
// Time Complexity:O(2^n)
// Auxiliary Space:O(	n)

//{ Driver Code Starts.

// Driver code
int main()
{

    int n;
    cin >> n;
    TOH(n, 'A', 'B', 'C');
    return 0;
}
// } Driver Code Ends