// // Second Largest element
// #include <iostream>
// #include <climits>

// using namespace std;

// int secondLargest(int arr[], int n)
// {
//     // second value
//     int scnd = INT_MIN;
//     // first and second max index
//     int mx = 0, mx2 = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[mx] < arr[i])
//         {
//             mx = i;
//         }
//     }
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[mx] != arr[i])
//         {
//             if (scnd < arr[i])
//             {
//                 scnd = arr[i];
//                 mx2 = i;
//             }
//         }
//     }
//     return mx2;
// }
// // Time Complexity:O(n) 
// // Auxiliary Space:O(1)

// int main()
// {
//     int arr[] = {5, 20, 12, 20, 10}, n = 5;
//     cout << secondLargest(arr, n) << endl;
//     return 0;
// }


// ----------------also-------------

// C++ program to find the second largest element

#include <iostream>
using namespace std;

// returns the index of second largest
// if second largest didn't exist return -1
int secondLargest(int arr[], int n) {
	int first = 0, second = -1;
	for (int i = 1; i < n; i++) {
		if (arr[i] > arr[first]) {
			second = first;
			first = i;
		}
		else if (arr[i] < arr[first]) {
			if (second == -1 || arr[second] < arr[i])
				second = i;
		}
	}
	return second;
}

int main() {
	int arr[] = {10, 12, 20, 4};
	int index = secondLargest(arr, sizeof(arr)/sizeof(arr[0]));
	if (index == -1)
		cout << "Second Largest didn't exist";
	else
		cout << "Second largest : " << arr[index];
}