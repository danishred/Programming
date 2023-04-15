// Linear search take order of n times while binary search takes log (n) times to find key.
#include <iostream>
using namespace std;

int main()
{
    int a[] = {45, 77, 89, 91, 94, 98, 100};
    int l = 0, h = 9, key, mid;

    cout << "Enter key\n";
    cin >> key;

    while (l <= h)    {
        mid = (l + h) / 2;
        if (key == a[mid])
        {
            cout << "Found at " << mid;
            return 0;

        }
        else if (key < a[mid])
        {
            h = mid - 1;
        }
        else
        {
            l = mid + 1;
        }
    }

    cout << "Key is not found";

    return 0;
}
