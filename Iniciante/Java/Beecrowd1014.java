import java.util.Scanner;

public class Beecrowd1014 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int X;
        double Y;

        X = scanner.nextInt();
        Y = scanner.nextDouble();

        System.out.printf("%.3f km/l\n", X/Y);

        scanner.close();

    }
}
