// Program to print powersets of a string

#include <iostream>
#include "supplement.h"
#include <cstring>
#include <math.h>
using namespace std;

// Sir's
void powerset(char str[])
{
    int n = strlen(str);

    int psets = 1 << n;
    cout << "\n"
         << psets << endl;

    // no. of powersets produced
    for (int i = 0; i < psets; i++)
    {
        // every bit is being checked whether it is set or not
        for (int j = 0; j < n; j++)
        {
            // if set then printed
            if ((i & (1 << j)) != 0)
            {
                cout << str[j];
            }
        }
        cout << endl;
    }
}
// Time Complexity:Θ(2^n*n)
// Auxiliary Space:Θ(1)

int main()
{
    char str[10];
    cin >> str;
    powerset(str);
    return 0;
}
