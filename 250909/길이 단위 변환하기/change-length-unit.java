public class Main {
    public static void main(String[] args) {
        double fit = 9.2;
        double mile = 1.3;
        double fit1 = fit*30.48;
        double mile1 = mile*160934;
        System.out.printf("%.1fft = %.1fcm\n",fit,fit1);
        System.out.printf("%.1fmi = %.1fcm",mile,mile1);
    }
}