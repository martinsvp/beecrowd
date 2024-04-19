import java.util.Scanner;

public class bee1003 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int A, B, soma;

        A = input.nextInt();
        B = input.nextInt();

        soma = A + B;

        System.out.println("SOMA = " + soma);

        input.close();
    }
}
