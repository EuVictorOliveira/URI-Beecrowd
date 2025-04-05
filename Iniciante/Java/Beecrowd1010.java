import java.util.Scanner;

public class Beecrowd1010 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        int qtdProduto1, qtdProduto2;
        double valorProduto1, valorProduto2;

        //codigo1 = scanner.nextInt();
        qtdProduto1 = scanner.nextInt();
        valorProduto1 = scanner.nextDouble();

        //codigo2 = scanner.nextInt();
        qtdProduto2 = scanner.nextInt();
        valorProduto2 = scanner.nextDouble();
        
        System.out.printf("VALOR A PAGAR: R$ %.2f\n", (qtdProduto1*valorProduto1)+(qtdProduto2*valorProduto2));

        scanner.close();
    }
}
