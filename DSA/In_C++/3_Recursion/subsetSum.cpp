#include <iostream>
#include <vector>
using namespace std;

int k = 0;
int add = 0;
int subsetSum(vector<int> arr, vector<int> curr, int index, int sum)
{
    if (index == arr.size())
    {
        for (auto &x : curr)
        {
            add = add + x;
        }
        if (add == sum)
            k++;
        add = 0;
        return k;
    }
    subsetSum(arr, curr, index + 1, sum);
    curr.push_back(arr[index]);
    subsetSum(arr, curr, index + 1, sum);
    return k;
}
// Time Complexity:O(2^n)
// Auxiliary Space:O(n)

int main()
{
    int n, a, sum;
    cout << "\nPlease enter the sum:" << endl;
    cin >> sum;
    cout << "\nEnter set size:" << endl;
    cin >> n;
    vector<int> arr;
    vector<int> curr;
    cout << "\nEnter set elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        arr.push_back(a);
    }
    cout << "\nNo. of subsets with given sum: \n"
         << subsetSum(arr, curr, 0, sum) << endl
         << endl;
    return 0;
}


// // Sirs
// int countSubsets(int arr[], int n, int sum)
// {
// 	if(n==0)
// 		return sum==0? 1 : 0;

// 	return countSubsets(arr, n-1, sum) + countSubsets(arr, n-1, sum - arr[n-1]);
// }


// int main() {
    
//     	int n = 2, arr[]= {3,4}, sum = 7;
    	
//     	cout<<countSubsets(arr, n, sum);
    	
//     	return 0;
// }