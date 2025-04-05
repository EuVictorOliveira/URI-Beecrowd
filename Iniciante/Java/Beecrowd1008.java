import java.util.Locale;
import java.util.Scanner;

public class Beecrowd1008 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        scanner.useLocale(Locale.US);

        int number, horas;
        float salarioHoras;

        number = scanner.nextInt();
        horas = scanner.nextInt();
        salarioHoras = scanner.nextFloat();

        System.out.printf("NUMBER = %d\nSALARY = U$ %.2f\n",number,horas*salarioHoras);

        scanner.close();
    }
}
