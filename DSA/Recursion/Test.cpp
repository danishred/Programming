// Tower of Hanoi
#include <iostream>
using namespace std;

void TOH(int n, char A, char B, char C)
{
    if (n == 1)
    {
        cout << "Move 1 from " << A << "to" << C << endl;
    }
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