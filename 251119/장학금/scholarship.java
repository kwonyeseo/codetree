import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int m = sc.nextInt();
        int f = sc.nextInt();

        if (m >= 90) {
            if (f >= 95) {
                System.out.printf("100000");
            }else if (f >= 90) {
                System.out.printf("50000");
            }else {
                System.out.printf("0");
            }
        }else {
            System.out.printf("0");
        }
    }
}