import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int sum = 0;
        int i = a;

        while (i != b) {
            if (a < b) {
                if (i % 5 == 0) {
                    sum += i;
                }i++;
            }else {
                if (i % 5 == 0) {
                    sum += i;
                }i--;
            }
        }
        if (i == b && i % 5 == 0) {
            sum += i;
        }
        System.out.printf("%d", sum);
    }
}