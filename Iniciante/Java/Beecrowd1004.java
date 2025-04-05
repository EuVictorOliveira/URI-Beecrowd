import java.util.Scanner;

public class Beecrowd1004 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int A,B;

        A = scanner.nextInt();
        B = scanner.nextInt();

        System.out.printf("PROD = %d\n",A*B);
        
        scanner.close();
    }
}
