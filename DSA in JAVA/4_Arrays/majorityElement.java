/*Our Task: Find the majority element in the array. A majority element in an array A[] of size n is 
an element that appears more than n/2 times (and hence there is at most one such element).*/

// Test Cases:-
// Input 5 then 8 2 8 4 8 output 0 or 3 or 4
// Input 6 then 3 7 4 7 7 5 output -1
// Input 7 then 20 30 40 50 50 50 50 output 50

import java.util.Scanner;

public class majorityElement {

    // Mine|Naive
    public static int majorityElement1(int[] arr, int n) {
        int k = n / 2, count = 0, majority = 0, num = -1;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (arr[i] == arr[j]) {
                    count++;
                }
            }
            if ((count > k) && (count > majority)) {
                majority = count;
                num = i;
            }
            count = 0;
        }
        return num;
    }
    // Time Complexity: O(n^2)
    // Auxiliary Space: O(1)

    // Driver Code
    public static void main(String[] args) {
        int n;
        Scanner val = new Scanner(System.in);
        System.out.print("Enter the number of elements you want to store: ");
        n = val.nextInt();
        int[] arr = new int[n];
        System.out.println("Enter elements of the Array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = val.nextInt();
        }
        val.close();
        System.out.println(majorityElement1(arr, n));
    }
}