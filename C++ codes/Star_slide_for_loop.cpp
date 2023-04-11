// Nested for loops
#include <iostream>
using namespace std;

int main()
{
    cout << "\n";
    //----my way----
    for (int i = 1; i <= 5; i++)     
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }

        cout << "\n";
    }
    cout << "\n";
    //----sir's way----

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i >= j)
            {
                cout << "* ";
            }
        }

        cout << "\n";
    }
    cout << "\n";

    //--------pattern 2

    for (int i = 0; i < 5; ++i)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i > j)
            {
                cout << "  ";
            }

            else
            {
                cout << "* ";
            }
        }

        cout << "\n";

        //----pattern3-----
    }
    for (int i = 0; i < 6; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i + j > 5 - 1)
                cout << "* ";
            else
                cout << "  ";
        }
        cout << endl;
    }
    cout << "\n";
    //----pattern4-----
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (i <= j)
                cout << "* ";
        }
        cout << "\n";
    }

    return 0;
}