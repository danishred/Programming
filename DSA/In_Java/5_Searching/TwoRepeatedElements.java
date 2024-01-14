//{ Driver Code Starts
//Initial template for JAVA

// import java.util.*;
// import java.lang.*;
import java.io.*;

// } Driver Code Ends

//User function template for JAVA

/* 
4
1 2 1 3 4 3
 */
class TwoRepeatedElements {

    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));

        int n = Integer.parseInt(br.readLine());
        String l = br.readLine();
        String[] sarr = l.split(" ");
        int[] arr = new int[sarr.length];
        for (int i1 = 0; i1 < arr.length; i1++) {

            arr[i1] = Integer.parseInt(sarr[i1]);
        }
        int[] res = twoRepeated(arr, n);
        System.out.println(res[0] + " " + res[1]);

    }

    //Function to find two repeated elements.
    public static int[] twoRepeated(int arr[], int N) {
        int[] a = new int[2];
        int counter = 0;
        for (int i = 0; i < N + 2; i++) {
            if (arr[Math.abs(arr[i])] >= 0) {
                arr[Math.abs(arr[i])] = - Math.abs(arr[Math.abs(arr[i])]);
            } else {
                a[counter] = Math.abs(arr[i]);
                counter++;
                if (counter == 2) {
                    break;
                }
            }
        }
        return a;
    }
}