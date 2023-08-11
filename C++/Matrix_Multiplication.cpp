// Multiplication of Two Matrices
#include <iostream>
using namespace std;

int main()
{
    int a[5][5], b[5][5], c[5][5], i, j, k, sum = 0, m, n, o, p;
    cout << "\nEnter number of rows and columns of first matrix\n";
    cin >> m >> n;
    cout << "\nEnter number of rows and columns of second matrix\n";
    cin >> o >> p;
    if (n != o)
    {
        cout << "\nMultiplication of matrices is not possible";
        cout << "\nColum of first must be same as row of second matrix";
    }
    else
    {
        cout << "\nEnter the first matrix\n";
        for (i = 0; i < m; i++)
            for (j = 0; j < n; j++)
                cin >> a[i][j];
        cout << "\nEnter second matrix\n";
        for (i = 0; i < o; i++)
            for (j = 0; j < p; j++)
                cin >> b[i][j];
        cout << "\nThe First Matrix is\n";

        for (i = 0; i < m; i++)
        {
            cout << "\n";
            for (j = 0; j < n; j++)
            {
                cout << a[i][j] << " ";
            }
        }
        cout << "\nThe Second Matrix is\n";

        for (i = 0; i < o; i++)
        {
            cout << "\n";
            for (j = 0; j < p; j++)
            {
                cout << b[i][j] << " ";
            }
        }
        for (i = 0; i < m; i++)
            for (j = 0; j < p; j++)
                c[i][j] = 0;
        for (i = 0; i < m; i++)
        { // row of first matrix
            for (j = 0; j < p; j++)
            { // column of second matrix
                sum = 0;
                for (k = 0; k < n; k++)

                    sum = sum + a[i][k] * b[k][j];
                c[i][j] = sum;
            }
        }
    }
    cout << "\nThe Multiplication of two matrices is \n";
    for (i = 0; i < m; i++)
    {
        cout << "\n";
        for (j = 0; j < p; j++)
        {
            cout << c[i][j] << " ";
        }
    }

    return 0;
}