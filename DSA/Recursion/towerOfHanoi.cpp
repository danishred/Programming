// Tower of Hanoi
#include <iostream>
using namespace std;

void TOH(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move 1 from " << A << " to " << C << endl;
        return;
    }
    TOH(n - 1, A, C, B);
    cout << "Move " << n << " from " << A << " to " << C << endl;
    TOH(n - 1, B, A, C);
}

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