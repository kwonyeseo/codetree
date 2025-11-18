import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String phone = sc.next();
        String[] arr = phone.split("-");

        System.out.printf("%s-%s-%s", arr[0], arr[2], arr[1]);
    }
}