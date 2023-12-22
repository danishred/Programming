/**
 * test
 */
public class test {

    static int plusMethod(int x, int y) {
        return x + y;
    }

    static double plusMethod(double x, double y) {
        return x + y;
    }

    public static void main(String[] args) {
        // numbers can be printed with or without quotes
        // strings cannot
        System.out.println(1);
        System.out.println("1");
        // operations can also be performed this way
        System.out.println(2 + 1);
        System.out.println(3 * 4);
        // overloading
        int myNum1 = plusMethod(8, 5);
        double myNum2 = plusMethod(4, 6.26);
        System.out.println("int: " + myNum1);
        System.out.println("double: " + myNum2);
    }
}