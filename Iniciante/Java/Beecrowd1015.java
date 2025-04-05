import java.util.Scanner;

public class Beecrowd1015{
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);
        
        double x1,y1,x2,y2;

        x1 = scanner.nextDouble();
        y1 = scanner.nextDouble();
        x2 = scanner.nextDouble();
        y2 = scanner.nextDouble();



        System.out.printf("%.4f\n", Math.sqrt(Math.pow(x2-x1,2)+Math.pow(y2-y1,2)));

        scanner.close();
    }

}
