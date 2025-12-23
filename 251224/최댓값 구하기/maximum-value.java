import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        // Please write your code here.
        Scanner sc = new Scanner(System.in);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int c = sc.nextInt();
        int max = 0;
        if(a>b){
            max = a;
            if(a>c){
                max = a;
            }
            else max = c;
        }
        else{
            max = b;
            if(b>c) max = b;
            else max = c;
        }
        System.out.print(max);
    }
}