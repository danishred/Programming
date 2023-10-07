//

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

int main()
{
    int n = 5;
    pattern12(n);
    return 0;
}
