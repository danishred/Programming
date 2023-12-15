// Find gray code of the decimal N and
// convert it into decimal

#include <iostream>
#include <vector>
using namespace std;

int greyToBinaryConverter(int n)
{
    return(!(n&(n-1)));
}


int main()
{
    int n;
    cin >> n;
    cout << greyToBinaryConverter(n) << endl;
    return 0;
}
