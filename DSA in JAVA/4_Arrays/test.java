import java.util.Scanner;

/**
 * test
 */
public class test {

    public static int majorityElement(int[] arr, int n) {
        int k = n / 2, count = 0, majority = 0, num = -1;
        for (int i : arr) {
            for (int j : arr) {
                if (i == j) {
                    count++;
                }
            }
            if ((count > k) && (count > majority)) {
                majority = count;
                num = i;
            }
            count = 0;
        }
        return num;
    }

    // Input 5 then 8 2 8 4 8
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
       /*  for (int i = 0; i < n; i++) {
            System.out.println(arr[i]);
        } */
        // For each works like this
     /*    for (int i : arr) {
             System.out.print(i);
        } */
        val.close();
        System.out.println(majorityElement(arr, n));
    }
}