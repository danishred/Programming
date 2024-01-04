import java.util.Scanner;

// 15 23

public class FractionalTrouble {

    public static int gcd(int a, int b) {
        if (b == 0)
            return a;
        else
            return gcd(b, a % b);
    }

    // Sir's
    // Time Complexity:O(1000) 
    // Auxiliary Space:O(1)
    
    public static int[] LargestFraction(int n, int d) {
        int MAX_NUMBER = 10000;
        int resNumerator = -1;
        int resDenominator = 1;

        for (int denominator = MAX_NUMBER; denominator > 1; denominator--) {
            int numerator = (n * denominator - 1) / d;
            if ((gcd(numerator, denominator) == 1) &&
                    (numerator * resDenominator >= denominator * resNumerator)) {
                resNumerator = numerator;
                resDenominator = denominator;
            }
        }

        return new int[] { resNumerator, resDenominator };
    }

    // My awesome attempt
    // public static int[] fracTrouble(int n, int d) {
    // double fractionValue = (double) n / (double) d, maxDenominator = 10000d;
    // double resultNumerator = 0, resultDenominator = -1;
    // int[] list = new int[2];
    // resultNumerator = Math.floor(fractionValue * maxDenominator);
    // if (resultNumerator / maxDenominator == fractionValue) {
    // resultNumerator--;
    // }
    // for (resultDenominator = maxDenominator; resultDenominator > 0;
    // resultDenominator--) {
    // if ((resultNumerator / resultDenominator) >= fractionValue) {
    // resultDenominator++;
    // if (gcdEuOp((int) resultNumerator, (int) resultDenominator) == 1)
    // break;
    // else {
    // resultNumerator--;
    // continue;
    // }
    // }
    // }
    // list[0] = (int) resultNumerator;
    // list[1] = (int) resultDenominator;
    // return list;
    // }

    public static void main(String[] args) {
        int n, d;
        Scanner val = new Scanner(System.in);
        System.out.println("Enter the Numerator and Denominator:");
        n = val.nextInt();
        d = val.nextInt();
        val.close();
        // minFlips(arr, n);
        // System.out.println(fracTrouble(n, d));
        int[] list = new int[2];
        list = LargestFraction(n, d);
        System.out.println(list[0]);
        System.out.println(list[1]);
    }

}