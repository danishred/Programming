// Recursive program to check for palindrome

#include <iostream>
#include <cstring>
using namespace std;

// Mine
bool recChkPalin(char str[], int n, int k)
{
    if (n <= k)
        return true;
    if (str[n] == str[k])
       return recChkPalin(str, n - 1, k + 1);
    else
        return false;
    return 1;
}
// Time Complexity: O(n) 
// Auxiliary Space: O(n)


int main()
{
    int n, k = 0;
    char str[100];
    cin >> str;
    n = strlen(str);
    cout << recChkPalin(str, n-1, k) << endl;
    return 0;
}
