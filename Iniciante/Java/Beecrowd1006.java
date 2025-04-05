import java.util.Locale;
import java.util.Scanner;

public class Beecrowd1006 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        scanner.useLocale(Locale.US);
        double A,B,C;

        A = scanner.nextDouble();
        B = scanner.nextDouble();
        C = scanner.nextDouble();

        System.out.printf("MEDIA = %.1f\n", (A*2+B*3+C*5)/10);

        scanner.close();
    }
}
