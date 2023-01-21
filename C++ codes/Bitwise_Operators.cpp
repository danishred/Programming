// Bitwise Operators
// Program to Demonstrate bitwise operators
#include <iostream>
using namespace std;
int main()
{

    int a = 11, b = 7, c; // 11=0001011 7=00000111
    c = a & b;
    cout << c << endl;
    int d = 11, e = 7, f;
    f = d | e;
    cout << f << endl;
    int g = 11, h = 7, i;
    i = g ^ h; // XOR
    cout << i << endl;
    char j = 5, k;
    k = j << 1; // k=5*2pow1 (left shift) binary bits are shifted
    cout << (int)k << endl;
    char l = 20, m;
    m = l >> 1; //  m=20/2pow1 (right shift)
    cout << (int)m << endl;
    char x = 5, y;
    y = ~x; // we would take 2's complement of y
    cout << (int)y << endl;
    return 0;
}