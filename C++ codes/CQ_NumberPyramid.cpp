#include <iostream>
using namespace std;

void printPyramid(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j >= 1; j--)
            cout << j;
            
        for (int j = 2; j <= i; j++)
            cout << j;
            
        cout << "\n";
    }
}

int main()
{
    int n = 5;
    printPyramid(n);

    return 0;
}