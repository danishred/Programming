/* Given n integer ranges, the task is to find the maximum occurring integer in these ranges. If more than one such integer exists, find the smallest one. The ranges are given as two arrays L[] and R[].  L[i] consists of starting point of range and R[i] consists of corresponding end point of the range.

For example consider the following ranges.
L[] = {2, 1, 3}, R[] = {5, 3, 9)
Ranges represented by above arrays are.
[2, 5] = {2, 3, 4, 5}
[1, 3] = {1, 2, 3}
[3, 9] = {3, 4, 5, 6, 7, 8, 9}
The maximum occurred integer in these ranges is 3 */

// Testcases
// Input 3 then 2 1 3 and 5 3 9 Output 3

//{ Driver Code Starts
import java.io.*;
import java.util.*;
import java.lang.*;

class maximumOccuredInteger {

    public static void main(String[] args) throws IOException {

        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        // taking size of array
        int n = Integer.parseInt(br.readLine().trim());
        int L[] = new int[n];
        int R[] = new int[n];
        String inputLine[] = br.readLine().trim().split(" ");

        // adding elements to array L
        for (int i = 0; i < n; i++) {
            L[i] = Integer.parseInt(inputLine[i]);
        }
        inputLine = br.readLine().trim().split(" ");
        int maxx = Integer.MIN_VALUE;

        // adding elements to array R
        for (int i = 0; i < n; i++) {
            R[i] = Integer.parseInt(inputLine[i]);
            if (R[i] > maxx) {
                maxx = R[i];
            }
        }

        // Solution obj = new Solution();

        // calling maxOccured() function
        System.out.println(maxOccured(L, R, n, maxx));

    }

    public static int maxOccured(int L[], int R[], int n, int maxx) {
        int[] maxxArr = new int[maxx];
        int j = 0, res = 0;
        for (int i = 0; i < n; i++) {
            j = L[i];
            while (j != R[i]) {
                // increment index value of that number
                maxxArr[j] += 1;
                j++;
            }
        }
        for (int i = 0; i < maxx; i++) {
            res = Math.max(maxxArr[i], res);
        }
        return res;
    }

}
