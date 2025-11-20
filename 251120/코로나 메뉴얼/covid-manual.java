import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a1 = sc.next();        
        int a2 = sc.nextInt();
        String b1 = sc.next();        
        int b2 = sc.nextInt();
        String c1 = sc.next();        
        int c2 = sc.nextInt();

        if (a1.equals("Y") && a2 >= 37) {
            if ((b1.equals("Y") && b2 >= 37) || (c1.equals("Y") && c2 >= 37)) {
                System.out.printf("E");
            }else {
                System.out.printf("N");
            }
        }else if (b1.equals("Y") && b2 >= 37) {
            if (c1.equals("Y") && c2 >= 37) {
                System.out.printf("E");
            }else {
                System.out.printf("N");
            }
        }else {
            System.out.printf("N");
        }
    }
}