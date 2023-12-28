/* Description:-
Given an array arr[] of size N and two elements x and y, 
use counter variables to find which element appears most
in the array. If both elements have the same frequency,
then return the smaller element.
Note:  We need to return the element, not its count. */

/*Testcase1
11
1 1 2 2 3 3 4 4 4 4 5
4 5
Output 4
*/
/*Testcase2 
8
1 2 3 4 5 6 7 8
1 7
Output 1
*/
/*Testcase3
8
5 22 29 12 32 69 1 75
29 96
Output 29
 */

import java.util.*;

class whoHasTheMajority {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt(); // Input size of array n
        int arr[] = new int[n]; // Declaring the array
        for (int i = 0; i < n; i++) {
            int x = sc.nextInt();
            arr[i] = x; // Assigning elements to array
        }

        int x = sc.nextInt(); // Input x
        int y = sc.nextInt(); // Input y

        System.out.println(majorityWins(arr, n, x, y)); // The functions you complete
        sc.close();
    }
    // } Driver Code Ends

    // Mine | Efficient
    // Expected Time Complexity: O(N)
    // Expected Auxiliary Space: O(1)
    public static int majorityWins(int arr[], int n, int x, int y) {
        int xCount = 0, yCount = 0;
        // Counting frequency
        for (int i = 0; i < n; i++) {
            if (arr[i] == x) {
                xCount++;
            } else if (arr[i] == y) {
                yCount++;
            }
        }
        // returning number with max freq or smallest number if freq is same
        if (xCount == yCount) {
            return Math.min(x, y);
        } else if (xCount > yCount) {
            return x;
        } else
            return y;
    }
}
