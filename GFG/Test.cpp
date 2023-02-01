#include <iostream>
#include <algorithm>

using namespace std;

int GCD(int n1, int n2)
{
    int mult = n1 * n2;
    int temp = 0;
    int i = 0;
    int mini = min(n1, n2);
    int ans = 0;

    while (i != mini/2)
    {
        temp = mult;
        i++;
        temp = temp % (i * i);
        if (temp == 0)
        {
            ans = i;
        }
    }

    

    return ans;
}

int main()
{
    int n1, n2;
    cout << "Enter the two no:\n";
    cin >> n1 >> n2;
    cout << GCD(n1, n2);
    return 0;
}
