// Binray Search (ascending)

/* testcase1
6
20
10 20 30 40 50 60 */
/* testcase2
3
25
5 15 25
 */
/* testcase3
5
20
5 10 15 25 35
-1
 */
/* testcase4
2
20
10 15 
-1
*/
/* testcase5
2
10
10 10
 */

 import java.util.Scanner;

public class BinarySearch {

    public static int Search(int[] arr, int x) {
        int Lindex = 0, mid = -1, n = arr.length, Rindex = n - 1;
        while (Lindex <= Rindex) {
            mid = (Lindex + Rindex) / 2;
            if (x == arr[mid])
                return mid;
            else if (x < arr[mid]) { //flippin x < arr[mid] to x > arr[mid] will make it descending search
                Rindex = mid - 1;
            } else
                Lindex = mid + 1;
        }
        return -1;
    }

    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        // Enter no. of elements of array (Sorted)
        int n = input.nextInt();
        // Enter element you want to search
        int x = input.nextInt();
        // Enter the elements (Sorted)
        int arr[] = new int[n];
        for (int i = 0; i < arr.length; i++) {
            arr[i] = input.nextInt();
        }
        input.close();
        System.out.println(Search(arr, x));
    }
}