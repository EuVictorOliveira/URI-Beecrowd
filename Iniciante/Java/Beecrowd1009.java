import java.util.Scanner;

public class Beecrowd1009 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        double salario, vendas,  bonus;

        salario = scanner.nextDouble();
        vendas = scanner.nextDouble();

        bonus = vendas*0.15;

        System.out.printf("TOTAL = R$ %.2f\n", salario+bonus);

        scanner.close();

    }
}
