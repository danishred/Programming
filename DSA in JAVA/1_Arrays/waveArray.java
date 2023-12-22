import java.io.*;
import java.util.*;
import java.util.Arrays;

class IntArray
{
    public static int[] input(BufferedReader br, int n) throws IOException
    {
        String[] s = br.readLine().trim().split(" ");
        int[] a = new int[n];
        for(int i = 0; i < n; i++)
            a[i] = Integer.parseInt(s[i]); 
        
        return a;
    }
    
    public static void print(int[] a)
    {
        for(int e : a)
            System.out.print(e + " ");
        System.out.println();
    }
    
    public static void print(ArrayList<Integer> a)
    {
        for(int e : a)
            System.out.print(e + " ");
        System.out.println();
    }
}

class gfg {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            int n; 
            n = Integer.parseInt(br.readLine()); // input size of array
            
            
            int[] a = IntArray.input(br, n); // input elements of array / 1 2 3 4 5
            
            Solution obj = new Solution();
            obj.convertToWave(n, a); /* should prefix with a 
            class name and not its instance */
            StringBuffer sb=new StringBuffer("");
            for(int i : a){
                sb.append(i+" ");
            }
            System.out.println(sb.toString());
    }
}

// } Driver Code Ends

class Solution {
   public static void convertToWave(int n, int[] arr) {
        // code here
        int temp;
        for(int i = 0; i<n-1; i+=2)
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
    
};