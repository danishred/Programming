#include <iostream>
using namespace std;

void printSub(string str, string curr, int index, int n)
{
    if (index == str.length())
    {
        cout << curr << " " << flush;
        return;
    }

    printSub(str, curr, index + 1);
    printSub(str, curr + str[index], index + 1);
}
// Time Complexity:O(2^n) 
// Auxiliary Space:O(n)


int main()
{
    int n;
    string str;
    cin >> str >> n;
    printSub(str, "", 0, n);
    return 0;
}