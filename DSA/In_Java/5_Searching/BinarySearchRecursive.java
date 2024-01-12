
// import java.util.Arrays;
import java.util.Scanner;
import java.util.*;
import java.io.*;

/**
 * BinarySearchRecursive
 */

/* testcase1
5
20
10 20 30 40 50 
ouput 
1
 */
/* testcase2
3
30
10 20 30
output
2 */
/* testcase3
3
10
10 20 30
output
0
 */
/* testcase4
 4
 15
 10 20 30 40
 output
 -1
 */
/* testcase5
 2
 5
 10 20
 output
 -1
 */
/* testcase6
 1
 20
 15
 output
 -
 */
public class BinarySearchRecursive {

    public static int SearchRecursive(int[] arr, int x, int low, int high) {
        // *if a variable is not passed either it should be gloabal or declared locally
        int mid = (low + high) / 2;
        // *Remeber to break only when low is higher than high
        if (low > high) {
            return -1;
        }
        if (arr[mid] == x) {
            return mid;
            // *Remember mid+1 and mid -1 for low and high respectively
        } else if (x > arr[mid]) {
            return SearchRecursive(arr, x, mid + 1, high);
        } else {
            return SearchRecursive(arr, x, low, mid - 1);
        }
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        // Enter no. of elements of array (Sorted)
        int n = input.nextInt();
        int low = 0, high = n - 1;
        // Enter element you want to search
        int x = input.nextInt();
        // Enter the elements (Sorted)
        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = input.nextInt();
        }
        // int j = Arrays.binarySearch(arr, x); 
        // System.out.println(i + "Yeah");
        input.close();
        System.out.println(SearchRecursive(arr, x, low, high));
    }
    
}

class Solution
{
    //Function to find a continuous sub-array which adds up to a given number.
    static ArrayList<Integer> subarraySum(int[] arr, int n, int s) {
        // Your code here
        int curr = 0, firstindex = 0;
        ArrayList<Integer>index = new ArrayList<>();
        for (int i = 0; i < n; ++i){
            curr += arr[i];
            if(curr < s){
                continue;
            }
            while(curr > s){
                curr = curr - arr[firstindex];
                ++firstindex;
            }
            if(curr == s && s != 0){
                index.add(firstindex+1);
                index.add(i+1);
                return index;
            }else
                continue;
        }
        index.add(-1);
        return index;
    }
}

