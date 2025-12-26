import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        char a = sc.next().charAt(0);
        int b = sc.nextInt();
        char c = sc.next().charAt(0);
        int d = sc.nextInt();
        char e = sc.next().charAt(0);
        int f = sc.nextInt();
        int count = 0;
        if(a == 'Y' && b >= 37){
            count += 1;
        }
        if(c == 'Y' && d >= 37){
            count += 1;
        }
        if(e == 'Y' && f >= 37){
            count += 1;
        }
        
        if(count >= 2) System.out.print("E");
        else System.out.print("N");
    }
}