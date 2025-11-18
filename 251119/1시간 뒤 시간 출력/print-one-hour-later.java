import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String t = sc.next();
        String[] arr = t.split(":");

        int h = Integer.parseInt(arr[0]);
        System.out.printf("%d:%s", h + 1, arr[1]);
    }
}