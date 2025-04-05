import java.util.Scanner;

public class Beecrowd1007 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int A,B,C,D;

        A = scanner.nextInt();
        B = scanner.nextInt();
        C = scanner.nextInt();
        D = scanner.nextInt();

        System.out.printf("DIFERENCA = %d\n",(A*B)-(C*D));

        scanner.close();
    }
}
