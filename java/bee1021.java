import java.util.Scanner;

public class bee1021 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double valor = input.nextDouble();
        input.close();

        Caixa caixa = new Caixa(valor);
        caixa.getValorTrocado();
    }
}

class Caixa {
    private double valor;

    Caixa(double valor) {
        this.valor = valor;
    }

    public void getValorTrocado() {
        int[] notas = {100, 50, 20, 10, 5, 2};
        double[] moedas = {1, 0.5, 0.25, 0.10, 0.05, 0.01};
        
        int valorInteiro = (int) valor;
        double valorRestante = valor - valorInteiro;

        System.out.println("NOTAS :");
        for(int nota : notas) {
            int qtdNotas = valorInteiro / nota;
            valorInteiro %= nota;
            System.out.printf("%d nota(s) de R$ %d.00%n", qtdNotas, nota);
        }

        int valorQuebrado = (int) Math.round(valorRestante * 100) + (valorInteiro * 100);

        System.out.println("MOEDAS: ");
        for(double moeda : moedas) {
            int qtdMoedas = (int) (valorQuebrado / (moeda * 100));
            valorQuebrado %= (int) (moeda * 100);
            System.out.printf("%d moeda(s) de R$ %.2f%n", qtdMoedas, moeda);
        }
    }
}