//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class PrintPattern {
    public static void main(String args[]) throws IOException {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int N = Integer.parseInt(in.readLine().trim());
        List<Integer> ans = new ArrayList<Integer>();
        ans = pattern(N);
        for (int i = 0; i < ans.size(); i++)
        System.out.print(ans.get(i) + " ");
        System.out.println();
    }

    static int i = 0;
    static int flag, k = 0;

    //Mine
    public static void replace(int N, List<Integer> List) {
        List.add(N);
        i++;
        if (i == k) {
            flag = 0;
            return;
        }
        if (i == k / 2 + 1) {
            flag = -1;
        }
        if (flag == 1) {
            replace(N - 5, List);
        }
        if (flag == -1) {
            replace(N + 5, List);
        }
    }
    public static List<Integer> pattern(int N) {
        // code here
        flag = (N < 0) ? -1 : 1;
        if ((N % 5) == 0)
            k = 0;
        else
            k = 1;
        k += N / 2;
        List<Integer> List = new ArrayList<Integer>();
        replace(N, List);
        return List;
    }
    //end

    // Sir's
    static List<Integer> List = new ArrayList<Integer>();
    public static List<Integer> pattern(int N){
        // code here
        List.add(N);
        if(N<=0)
        return List;
        pattern(N-5);
        List.add(N);
        return List;
    }
}
// } Driver Code Ends
// User function Template for Java
