/* Description:-
Given n integer ranges, the task is to find the maximum occurring integer in these ranges.
If more than one such integer exists, find the smallest one.
The ranges are given as two arrays L[] and R[].
L[i] consists of starting point of range and R[i] consists of corresponding end point
of the range.

For example consider the following ranges.
L[] = {2, 1, 3}, R[] = {5, 3, 9)
Ranges represented by above arrays are.
[2, 5] = {2, 3, 4, 5}
[1, 3] = {1, 2, 3}
[3, 9] = {3, 4, 5, 6, 7, 8, 9}
The maximum occurred integer in these ranges is 3 */

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
        // System.out.println(maxOccured(L, R, n, maxx));
        System.out.println("Output: " + maxOccured2(L, R, n, maxx));

    }

    // Mine|Using arrays
    // Time Complexity:O(n*maxx)
    // Auxiliary Space:O(maxx)
    public static int maxOccured(int L[], int R[], int n, int maxx) {
        int[] maxxArr = new int[maxx];
        int j = 0, occurence = 0, res = 0;
        for (int i = 0; i < n; i++) {
            j = L[i] - 1;
            while (j != (R[i])) {
                // increment index value of that number
                maxxArr[j] += 1;
                ++j;
            }
        }
        for (int i = 0; i < maxx; i++) {
            if (maxxArr[i] > occurence) {
                occurence = maxxArr[i];
                res = i + 1;
            }
        }
        return res;
    }

    // Mine|Using hashtable
    // Time Complexity:O(n*maxx)
    // Auxiliary Space:O(maxx)
    public static int maxOccured1(int L[], int R[], int n, int maxx) {
        Hashtable<Integer, Integer> maxxHashtable = new Hashtable<Integer, Integer>();
        int j = 0, occurence = 0, res = 0;
        for (int i = 1; i < maxx + 1; i++) {
            maxxHashtable.put(i, 0);
        }
        for (int i = 0; i < n; i++) {
            j = L[i];
            while (j != (R[i] + 1)) {
                // increment index value of that number
                maxxHashtable.put(j, maxxHashtable.get(j) + 1);
                ++j;
            }
        }
        for (j = 1; j < maxx + 1; j++) {
            if (maxxHashtable.get(j) > occurence) {
                occurence = maxxHashtable.get(j);
                res = j;
            }
        }
        return res;
    }

    // Mine|Efficient using hint
    // Time Complexity:O(n+maxx)
    // Auxiliary Space:O(maxx)
    public static int maxOccured2(int L[], int R[], int n, int maxx) {
        // if maxx = 10 then maxxArr[] should be of 11 size as 11th index
        // will store frequency of 10
        // maxxArr[R[i] + 1] so 1 more index is required hence maxx+2
        int maxxArr[] = new int[maxx + 2]; 
        int freq = 0, res = 0;
        for (int i = 0; i < n; i++) {
            maxxArr[L[i]] += 1;
            maxxArr[R[i] + 1] += -1;
        }
        // creating prefix sum array
        for (int i = 0; i < maxx + 1; i++) {
            freq += maxxArr[i];
            maxxArr[i] = freq;
        }
        freq = 0;
        // extracting min value element with max frequency
        for (int i = 0; i < maxx + 1; i++) {
            if (maxxArr[i] > freq) {
                freq = maxxArr[i];
                res = i;
            }
        }
        return res;
    }
}
