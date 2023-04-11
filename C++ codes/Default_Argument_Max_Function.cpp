#include <iostream>
using namespace std;

int maxim(int a = 0, int b = 0, int c = 0)
{
    return a > b && a > c ? a : b > c ? b : c;
}

int main()
{
    cout << maxim() << "\n";
    cout << maxim(10) << "\n";
    cout << maxim(10, 13) << "\n";
    cout << maxim(10, 13, 15) << "\n";

    return 0;
}