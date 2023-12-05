// Patterns for logic building

#include <iostream>
using namespace std;

void pattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern2(int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < r + 1; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern3(int n)
{
    // code here
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}
void pattern4(int n)
{
    // code here
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << r << " ";
        }
        cout << endl;
    }
}
void pattern5(int n)
{
    // code here
    for (int r = n; r >= 1; r--)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern6(int n)
{
    // code here
    for (int r = n; r >= 1; r--)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}
void pattern7(int n)
{
    // code here
    for (int r = n; r >= 1; r--)
    {
        for (int c = 1; c < r; c++)
        {
            cout << " ";
        }
        for (int c = n; c > r - 1; c--)
        {
            cout << "*";
        }
        for (int c = n; c > r; c--)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void pattern8(int n)
{
    // code here
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < r; c++)
        {
            cout << " ";
        }
        for (int c = 2 * (n - r - 1) + 1; c > 0; c--)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern9(int n)
{
    for (int r = n; r > 0; r--)
    {
        for (int c = 1; c < r; c++)
        {
            cout << " ";
        }
        for (int c = n - r; c >= 0; c--)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < r; c++)
        {
            cout << " ";
        }

        for (int c = r; c < n; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern10(int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < r + 1; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    for (int r = n - 1; r >= 1; r--)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}
void pattern11(int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 1; c < r + 2; c++)
        {
            if ((abs(c - r)) & 1)
            {
                cout << "1 ";
            }
            else
                cout << "0 ";
        }
        cout << endl;
    }
}
void pattern12(int n)
{
    // code here
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << c << " ";
        }
        for (int c = 1; c <= (n - r) * 4; c++)
        {
            cout << " ";
        }
        for (int c = r; c > 0; c--)
        {
            cout << c << " ";
        }
        cout << endl;
    }
}
void pattern13(int n)
{
    int val = 1;
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << val++ << " ";
        }
        cout << endl;
    }
}
void pattern14(int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c <= r; c++)
        {
            cout << (char)(65 + c);
        }
        cout << endl;
    }
}
void pattern15(int n)
{
    for (int r = n - 1; r >= 0; r--)
    {
        for (int c = 0; c <= r; c++)
        {
            cout << (char)(65 + c);
        }
        cout << endl;
    }
}
void pattern16(int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c <= r; c++)
        {
            cout << (char)(65 + r);
        }
        cout << endl;
    }
}
void pattern17(int n)
{

    for (int r = 0; r < n; r++)
    {
        int k = r;
        for (int c = n; c > r + 1; c--)
        {
            cout << " ";
        }
        for (int c = 0; c < (2 * r) + 1; c++)
        {
            if (c >= r)
            {
                cout << (char)('A' + k--);
            }
            else
                cout << (char)('A' + c);
        }
        cout << endl;
    }
}
void pattern18(int n)
{
    int k;
    for (int r = n - 1; r >= 0; r--)
    {
        k = n - 1;
        for (int c = n - 1; c >= r; c--)
        {
            cout << (char)(65 + k--) << " ";
        }
        cout << endl;
    }
}
void pattern19(int n)
{

    for (int r = n; r > 0; r--)
    {
        for (int c = 1; c < r + 1; c++)
        {
            cout << "*";
        }
        for (int c = n - r; c > 0; c--)
        {
            cout << "  ";
        }
        for (int c = 1; c < r + 1; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < r + 1; c++)
        {
            cout << "*";
        }

        for (int c = r; c < n - 1; c++)
        {
            cout << "  ";
        }
        for (int c = 0; c < r + 1; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern20(int n)
{
    for (int r = 0; r < n; r++)
    {
        for (int c = 0; c < r + 1; c++)
        {
            cout << "*";
        }
        for (int c = n - 1; c > r; c--)
        {
            cout << "  ";
        }
        for (int c = 0; c < r + 1; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int r = n - 1; r >= 1; r--)
    {
        for (int c = 1; c <= r; c++)
        {
            cout << "*";
        }
        for (int c = 0; c <= n - r - 1; c++)
        {
            cout << "  ";
        }
        for (int c = 1; c <= r; c++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void pattern21(int n)
{
    for (int r = 1; r <= n; r++)
    {
        for (int c = 1; c <= n; c++)
        {
            if (r == 1 || r == n)
            {
                cout << "*";
                continue;
            }

            if (c == 1 || c == n)
            {
                cout << "*";
            }
            else
                cout << " ";
        }
        cout << endl;
    }
}
void pattern22(int n)
{
    for (int r = n; r > 0; r--)
    {
        int k = n;
        if (r < n)
        {
            for (int c = 0; c < n - r; c++)
            {
                cout << k-- << " ";
            }
        }
        for (int c = 0; c < 2 * (r - 1) + 1; c++)
        {
            cout << r << " ";
        }
        if (r < n)
        {
            for (int c = 0; c < n - r; c++)
            {
                cout << ++k << " ";
            }
        }
        cout << endl;
    }
    for (int r = 2; r <= n; r++)
    {
        int k = n;
        if (r < n)
        {
            for (int c = 0; c < n - r; c++)
            {
                cout << k-- << " ";
            }
        }
        for (int c = 0; c < 2 * (r - 1) + 1; c++)
        {
            cout << r << " ";
        }
        if (r < n)
        {
            for (int c = 0; c < n - r; c++)
            {
                cout << ++k << " ";
            }
        }
        cout << endl;
    }
}

int main()
{
    int n = 4;
    pattern22(n);
    return 0;
}
