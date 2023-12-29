import java.util.Scanner;

public class MinimumConsecutiveFlips {

    public static void minFlips(int arr[], int n) {
        int setcount1 = 0, setcount0 = 0, boolval = -1,
        flip = 0, flipto = 0, flipping = 0;

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

    }
}
