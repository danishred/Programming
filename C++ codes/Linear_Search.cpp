//
#include <iostream>
using namespace std;

    int main()
    {
        int a[4], key;

        cout << "Enter 4 numbers\n";

        for (int i = 0; i < 4; i++)
        {
            cin >> a[i];
        }

        cout << "Enter key you want to search for\n";

        cin >> key;

        for (int i = 0; i < 4; i++)
        {
        
            if (key == a[i])
            {
                cout << "key is found at index " << i;
                return 0;
            }
        }
        cout<<"Key is not found";
        return 0;
    }
