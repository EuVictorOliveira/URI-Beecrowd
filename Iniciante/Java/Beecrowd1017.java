import java.util.Scanner;

public class Beecrowd1017 {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        int tempoViagem, velocidadeMedia, distancia;

        tempoViagem = scanner.nextInt();
        velocidadeMedia = scanner.nextInt();

        distancia = velocidadeMedia*tempoViagem;

        System.out.printf("%.3f\n", distancia/12.0 );

        scanner.close();
    }
}
