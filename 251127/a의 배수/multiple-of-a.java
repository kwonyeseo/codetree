import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        int n = sc.nextInt();
        int a = sc.nextInt();

        int i = 1;

        while (i != n + 1) {
            if (i % a == 0) {
                System.out.printf("1\n");
            }else {
                System.out.printf("0\n");
            }

            i++;
        }
        
    }
}