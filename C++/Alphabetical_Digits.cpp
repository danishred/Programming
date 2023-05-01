#include <iostream>
using namespace std;

int main()
{
    int n, r, rev = 0, m;
    cout << "Enter the Number\n";
    cin >> n;
    m = n;

    while (n > 0)
    {
        r = n % 10;
        n = n / 10;
        rev = rev * 10 + r;
    }

    cout << "Reverse Number is\n"
         << rev << "\n";

    while (m > 0)
    {
        r = m % 10;
        m = m / 10;

        switch (r)
        {
        case 1:
            cout << "one";
            break;
        case 2:
            cout << "two";
            break;
        case 3:
            cout << "three";
            break;
        case 4:
            cout << "four";
            break;
        case 5:
            cout << "five";
            break;
        case 6:
            cout << "six";
            break;
        case 7:
            cout << "seven";
            break;
        case 8:
            cout << "eight";
            break;
        case 9:
            cout << "nine";
            break;
        case 0:
            cout << "zero";
            break;
        default:
            cout << "invalid";
        }
    }
    return 0;
}