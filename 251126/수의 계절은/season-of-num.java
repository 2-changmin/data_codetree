import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        if(a >= 3 && a <= 5) System.out.print("Spring");
        if(a >= 6 && a <= 8) System.out.print("Summer");
        if(a >= 9 && a <= 11) System.out.print("Fall");
        if(a >= 12 || a <= 2) System.out.print("Winter");
    }
}