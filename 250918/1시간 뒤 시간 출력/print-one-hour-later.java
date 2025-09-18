import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String h = sc.next();
        String[] strArr = h.split(":");
        int a = Integer.parseInt(strArr[0]);
        int b = Integer.parseInt(strArr[1]);
        a += 1;

        System.out.println(a + ":"+ b);        
    }
}