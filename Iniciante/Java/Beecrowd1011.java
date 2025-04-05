import java.util.Scanner;

public class Beecrowd1011 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        double R;

        R = scanner.nextDouble();

        System.out.printf("VOLUME = %.3f\n", (4.0/3)*3.14159*R*R*R);

        scanner.close();

    }
}
