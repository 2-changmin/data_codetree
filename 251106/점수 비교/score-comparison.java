import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int X_a = sc.nextInt();
        int X_b = sc.nextInt();
        int Y_a = sc.nextInt();
        int Y_b = sc.nextInt();
        if(X_a > Y_a && X_b > Y_b) System.out.print("1");
        else System.out.print("0");
    }
}