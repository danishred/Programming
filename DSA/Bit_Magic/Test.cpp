//

#include <iostream>
#include <cmath>
#include "supplement.h"

using namespace std;

int main()
{
    int n;
    cin >> n;
    cout << log2(n & -n);
    return 0;
}
