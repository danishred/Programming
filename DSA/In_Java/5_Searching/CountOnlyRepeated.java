//{ Driver Code Starts
//Initial Template for Java

/*package whatever //do not write package name here */

import java.util.Scanner; 
// } Driver Code Ends


//User function Template for Java

class CountOnlyRepeated
{
    // Pair Class

    static class Pair{
         long x;
         long y;
         
         Pair(long x, long y){
             this.x = x;
             this.y = y;
         }
     }
     public Pair findRepeating(Long arr[],int n)
     {
      if(n==(arr[n-1]-arr[0]+1)) return new Pair(-1,-1);
       int l=0,h=n-1;
       while(l<=h)
       {
           int mid=(l+h/2);
        // If Array mid value is less than mid plus one then repetition has occurred
           if(arr[mid]>=mid+1)
           {
               l=mid+1;
           } 
           else
           {
               h=mid-1;
           }
       }
       long freq=n-arr[n-1]+1;
       return new Pair(arr[l],freq);
     }
    public static void main (String[] args) {
		Scanner sc=new Scanner(System.in);
		    int n=sc.nextInt();
		    Long arr[] = new Long[n];
		    for(int i=0;i<n;i++)
		    arr[i]=sc.nextLong();
		    sc.close();
		    CountOnlyRepeated.Pair p=new CountOnlyRepeated().findRepeating(arr,n);
            
            System.out.println(p.x +" "+ p.y ); 
	}
};