import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        if((a>b && b>c) || (c>b && b>a)) System.out.print(b);
        else if((b>a && a>c) || (c>a && a>b)) System.out.print(a);
        else if((a>c && c>b) || (b>c && c>a)) System.out.print(b);
    }
}