
/*Description:-
  Our Task: Given a binary array, we need to convert this arra
  into an array that either contains all 1s or all 0s.
  We need to do it using the minimum number of group flips. 
 */
/* testcase1
6
1 1 0 0 0 1
output
From 2 to 4
 */
/* testcase2
11
1 0 0 0 1 0 0 1 1 1 1
output
From 1 to 3 
From 5 to 6
 */
/* testcase3
3
0 0 0 
output
nothing
 */
/* testcase4
3
1 1 1
output
nothing
 */
/* testcase5
2
0 1
output
From 0 to 0 or From 1 to 1
 */
import java.util.Scanner;

public class MinimumConsecutiveFlips {

// 1) Naive Approach:
// A Naive Solution is to 
// Traverse the two traversals of the array. 
// We first traverse to find the number of groups of 0s and the number of groups of 1. 
// We find the minimum of these two. 
// Then we traverse the array and flip the 1s if groups of 1s are less. Otherwise, we flip 0s.

    // Mine|Naive (cuz two traversals)
    // Time Complexity:O(n)
    // Auxiliary Space:O(1)
    public static void minFlips(int arr[], int n) {
        // setcount# mean count of consecutive set of #
        int setcount1 = 0, setcount0 = 0, boolval = -1,
                flip = 0, flipto = 1, flipping = 0;

        for (int i = 0; i < n; i++) {
            if (arr[i] == 1 && boolval != 1) {
                setcount1++;
                boolval = 1;
            } else if (arr[i] == 0 && boolval != 0) {
                setcount0++;
                boolval = 0;
            }
        }
        // The digit with lower set count is flipped
        flip = (setcount1 < setcount0) ? 1 : 0;
        flipto = (setcount1 < setcount0) ? 0 : 1;
        // if both digit have same freq then any one is printed (look at var flip and
        // flipto)

        for (int i = 0; i < n; i++) {
            // flipping means whether we are currently flipping or not
            if (flip == arr[i] && flipping == 0) {
                // prints when flipping began
                System.out.print("From " + i);
                flipping = 1;
            }
            // if we were flipping and reached end or other number
            if (flipto == arr[i] && flipping == 1) {
                System.out.println(" to " + (i - 1));
                flipping = 0;
            }
        }
    }

// 2) Efficient Approach:
// The aim is to do it with one traversal of array
// An Efficient Solution is based on the below facts : 
// There are only two types of groups (groups of 0s and groups of 1s)
// Either the counts of both groups are same or the difference between counts is at most 1.
// For example, in {1, 1, 0, 1, 0, 0} there are two groups of 0s and two groups of 1s.
// In example, {1, 1, 0, 0, 0, 1, 0, 0, 1, 1}, count of groups of 1 is one more than the counts of 0s.
// Based on the above facts, we can conclude that if we always flip the second group and other groups that 
// of the same type as the second group, we always get the correct answer.

    // Mine(Sir's logic)|Efficient (one traversal)
    // Time Complexity:O(n)
    // Auxiliary Space:O(1)
    // View the notes for more information
    public static void minFlips1(int arr[], int n) {
        int firstnum = arr[0], flipping = 0;
        for (int i = 1; i < n; i++) {
            // second set # is being flipped througout
            if (arr[i] != firstnum && flipping == 0) {
                System.out.print("From " + i);
                flipping = 1;
            }
            // if we were flipping and reached end or other number
            if (arr[i] == firstnum && flipping == 1) {
                System.out.println(" to " + (i - 1));
                flipping = 0;
            }
            // case if last element is to be flipped
            if (i == n - 1 && flipping == 1) {
                System.out.println(" to " + (i));
            }
        }
    }

    // Sir's|Efficient (one traversa similar to mine Efficient)
    // Time Complexity:O(n)
    // Auxiliary Space:O(1)
     static void printGroups(int arr[], int n)
    {
    	for(int i = 1; i < n; i++)
    	{
    		if(arr[i] != arr[i - 1])
    		{
    			if(arr[i] != arr[0])
                    System.out.print("From " + i + " to ");
    			else
                    System.out.println(i - 1);
    		}
    	}

    	if(arr[n - 1] != arr[0])
            System.out.println(n-1);
    }

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
        // minFlips(arr, n);
        minFlips1(arr, n);
    }
}
