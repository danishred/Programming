import java.util.Scanner;

public class FractionalTrouble {

    public static double fracTrouble(double n, double d) {
        double val = n / d, k = 0, l = 10000;
        k = val * l;
        if (k % 1 == 0) {
            return k;
        }

    }

    public static void main(String[] args) {
        double n, d;
        Scanner val = new Scanner(System.in);
        System.out.print("Enter the Numerator and Denominator: ");
        n = val.nextDouble();
        d = val.nextDouble();
        val.close();
        // minFlips(arr, n);
        System.out.println(fracTrouble(n, d));
    }

}
