import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a1 = sc.nextInt();
        String a2 = sc.next();
        int b1 = sc.nextInt();
        String b2 = sc.next();

        if ((a1 >= 19 && a2.equals("M")) || (b1 >= 19 && b2.equals("M"))) {
            System.out.printf("1");
        }else {
            System.out.printf("0");
        }
    }
}