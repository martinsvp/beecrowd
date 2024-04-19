import java.util.Scanner;

public class bee1002 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        double raio = input.nextDouble();
        double pi = 3.14159;

        double area = raio*raio*pi;

        System.out.printf("A=%.4f\n", area);
        input.close();
    }
}
