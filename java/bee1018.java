import java.util.Scanner;

public class bee1018 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int valor = input.nextInt();
        int notas[] = {100, 50, 20, 10, 5, 2, 1};

        System.out.println(valor);

        for(int i = 0; i < notas.length; i++) {
            int qntNotas = valor / notas[i];
            System.out.printf("%d nota(s) de R$ %d,00\n", qntNotas, notas[i]);
            valor %= notas[i];
        }

        input.close();
    }
}
