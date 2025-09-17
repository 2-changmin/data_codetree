import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String S = sc.next();
        String T = sc.next();
        String Temp = S;
        S = T;
        T = Temp;
        System.out.print(S + "\n" + T);        
    }
}