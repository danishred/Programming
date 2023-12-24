import java.util.Scanner;

/**
 * test
 */
public class test {

    public static int majorityElement(int[] arr, int n) {
        int k = n / 2, count = 0, majority = 0, num = -1;
        for (int i : arr) {
            for (int j : arr) {
                if (arr[i] == arr[j]) {
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

    public static void main(String[] args) {
        Scanner val = new Scanner(System.in);
        int n;
        int[] arr;
        n = val.nextInt();
        System.out.println(n);

        // int[] arr = new int[n];

    }
}