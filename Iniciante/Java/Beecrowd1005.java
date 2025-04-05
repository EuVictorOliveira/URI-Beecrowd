import java.util.Scanner;

public class Beecrowd1005 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        double A, B;

        A = scanner.nextDouble();
        B = scanner.nextDouble();

        System.out.printf("MEDIA = %.5f\n", ((A*3.5)+(B*7.5))/11.0);

        scanner.close();
    }
}
