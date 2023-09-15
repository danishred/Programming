//

#include <iostream>
// * include vector header file
#include <vector>
using namespace std;

int main()
{
    // n for inputing no. of elements into vector using for loop
    // a for taking user input and pushing back into vectors
    int n, a;
    cin >> n;
    // datastructure<type> varname;
    // No need of[] brackets
    vector<int> arr;
    vector<int> curr;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        // to add add back an element
        arr.push_back(a);
    }
    // use & for vectors
    for (auto &x : arr)
    {
        cout << x << endl;
    }
    return 0;
}
