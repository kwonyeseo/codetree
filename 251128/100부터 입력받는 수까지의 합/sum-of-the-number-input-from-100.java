import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int count = 0;

        for (int i = n; i <= 100; i++) {
            count += i;
        }
        System.out.printf("%d", count);
    }
}