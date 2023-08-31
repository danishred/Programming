#include <iostream>
using namespace std;

void printSub(string str, string curr, int index)
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

    string str;
    cin >> str;
    printSub(str, "", 0);
    return 0;
}