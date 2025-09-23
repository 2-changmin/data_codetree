import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int g = sc.nextInt();
        int s = sc.nextInt();
        g += 8;
        s *= 3;
        System.out.print(g + "\n" + s + "\n" + (g*s));
    }
}