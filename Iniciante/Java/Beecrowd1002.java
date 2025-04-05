import java.util.Scanner;

public class Beecrowd1002{
    public static void main(String[] args){
        Scanner leitor = new Scanner(System.in);
        double area, raio, pi = 3.14159;

        raio = leitor.nextDouble();
        area = pi*raio*raio;

        System.out.printf("A=%.2f",area);
        
        leitor.close();
    }
}