/* Description:-
Given an array arr[] of size N and two elements x and y, 
use counter variables to find which element appears most
in the array. If both elements have the same frequency,
then return the smaller element.
Note:  We need to return the element, not its count. */

/*Testcase1
3
2 1 3 
5 3 9 
Output 3*/
/*Testcase2 
4
1 4 3 1 
15 8 5 4 
Output 4
*/
/*Testcase3
5
1 5 9 13 21
15 8 12 20 30
Output 5
*/
/*Testcase4
2
0 1
4 4 
Output 1*/
//{ Driver Code Starts
// Initial Template for Java

import java.io.*;
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

    }

    // } Driver Code Ends
    // User function Temp
    // Function to find element with more appearances between two elements in an
    // array.
    public static int majorityWins(int arr[], int n, int x, int y) {
        return 1;

    }
}
