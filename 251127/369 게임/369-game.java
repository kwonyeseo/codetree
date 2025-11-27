import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            if (i % 3 == 0) {
                System.out.printf("0 ");
            }else if ((i % 10) != 0 && (i % 10) % 3 == 0) {
                System.out.printf("0 ");
            }else {
                System.out.printf("%d ", i);
            }
        }
    }
}