import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();

        for (int i = 1; i <= n; i++) {
            int k = i;
            while (true) {
                if (k % 3 == 0) {
                    System.out.printf("0 ");
                    break;
                }else if ((k % 10) != 0 && ((k % 10) % 3 == 0)) {
                    System.out.printf("0 ");
                    break;
                }else {
                    k /= 10;
                    if (k == 0) {
                        System.out.printf("%d ",i);
                        break;
                    }
                }
            }
        }
    }
}