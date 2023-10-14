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
    // can use value of n or itterator for accessing values
    // Using itterator we don't need to know the size of vector
    // cin >> n;
    // datastructure<type> varname;
    // No need of[] brackets
    // 5 instance of 10
    vector<int> arr(5, 10);
    vector<int> curr;

    // can use same methodology as arrays to change and access values
    // cout << arr[3] << endl;
    // arr[3] = 5;
    // cout << arr[3] << endl;

    // for (int i = 0; i < n; i++)
    // {
    //     cin >> a;
    //     // to add add back an element
    //     arr.push_back(a);
    // }
    // // use & for vectors
    // for (auto &x : arr)
    // {
    //     cout << x << endl;
    // }

    // Itterator method
    vector<int> k = {3, 4, 5};
    // Well k.back() returns value while k.begin() returns addresss
    cout<<k.back()<<endl<<*(k.begin())<<endl;
    return 0;
}
