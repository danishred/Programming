//
#include <iostream>
using namespace std;

int main()
{
    int A[2][3]; // 2 rows , 3 Columns,

    cout << "Please enter the matrix\n";
    for (auto &x : A)
    {
        for (auto &y : x)
        {
            cin >> y;
        }
    }
    cout << "\n";

    cout << "the matrix is \n";

    for (auto &x : A)
    {
        cout << "\n";
        for (auto &y : x)
        {
            cout << y << " ";
        }
    }

    return 0;
}



