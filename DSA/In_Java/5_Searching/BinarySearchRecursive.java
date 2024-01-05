
import java.util.Scanner;

/**
 * BinarySearchRecursive
 */
/*
 * testcase1
 * 5
 * 20
 * 10 20 30 40 50
 * output
 * 1
 */
/*
 * testcase2
 * 3
 * 10 20 30
 * 30
 * output
 * 2
 */
/*
 * testcase3
 * 3
 * 10 20 30
 * 10
 * output
 * 0
 */
/*
 * testcase4
 * 4
 * 10 20 30 40
 * 15
 * output
 * -1
 */
/*
 * testcase5
 * 2
 * 10 20
 * 5
 * output
 * -1
 */
/*
 * testcase6
 * 1
 * 15
 * 20
 * output
 * -1
 */

public class BinarySearchRecursive {
    static int mid = -1; // high declared in main func.

    public static int SearchRecursive(int[] arr, int x, int low, int high) {
        mid = (low + high) / 2;
        if (low > high) {
            return -1;
        }   
        if (arr[mid] == x) {
            return x;
        } else if (arr[mid] < x) {
            return SearchRecursive(arr, x, mid+1, high);
        } else {
            return SearchRecursive(arr, x, low, low-1);
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
        input.close();
        System.out.println(SearchRecursive(arr, x, low, high));
    }

}