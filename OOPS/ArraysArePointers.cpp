//
#include <iostream>
using namespace std;

int main()
{
    int numbers[] = {4, 6, 8, 10, 16};
    cout << *numbers
         << "\n";
    cout << *(numbers + 1)
         << "\n";
    cout << *(numbers + 2)
         << "\n";
    cout << *(numbers + 3)
         << "\n";
    cout << *(numbers + 4)
         << "\n";
    return 0;
}