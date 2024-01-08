
//{ Driver Code Starts
// import java.util.*;
import java.io.*;

// } Driver Code Ends
/*
5 
1 2 10 0 -1 
*/

class Test {
    public static void main(String[] args) throws IOException {

        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter out = new PrintWriter(System.out);

        //input number n
        int n = Integer.parseInt(in.readLine().trim());
        int[] arr = new int[n];
        String s[] = in.readLine().trim().split(" ");

        //adding elements to the array
        for (int i = 0; i < n; i++)
            arr[i] = Integer.parseInt(s[i]);

        //calling missingNumber()
        int missing = missingNumber(arr,n);
        out.println(missing);
        // missingNumber(arr, n);
        out.close();
    }

    //Function to find the smallest positive number missing from the array.
    static int missingNumber(int arr[], int size) {
        // Your code here
        int n = size;
        int count = 0, temp = 0, z = 0;
        // loop for segregation
        for (int i = 0; i < n; i++) {
            if (arr[i] <= 0) {
                temp = arr[count];
                arr[count] = arr[i];
                arr[i] = temp;
                count++; //2
            }
        }
        for (int i = count; i < arr.length; i++) {
            if (Math.abs(arr[i]) <= n - count) {
                z = Math.abs(arr[i]) + count - 1;
                arr[z] = -Math.abs(arr[z]);
            }
        }
        for (int i = count; i < n; i++) {
            if (arr[i] > 0) {
                return i + 1 - count;
            }
        }
        return n - count + 1;
    }
}

// return n+1;
//     if(arr[i] % (n+1) <= n && arr[i] % (n+1) > 0){
//         arr[arr[i]-1] = Math.abs(arr[arr[i]-1]) * (n + 1) + arr[i];
//     }
// }
// for (int i = 0; i < n; i++){
//     if(arr[i] % (n+1) != i+1){
//         return i+1;
//     }