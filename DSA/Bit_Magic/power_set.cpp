//

#include <iostream>
#include "supplement.h"
#include <cstring>
#include <math.h>
using namespace std;

void powerset(char str[])
{
    int n = strlen(str);
    int psets = 1 << n;

    for (int i = 0; i < psets; i++)
    {
        /* code */
    }
}

int main()
{
    int n;
    cin >> n;
    char str[n];
    cin >> str;
    powerset(str);
    return 0;
}
