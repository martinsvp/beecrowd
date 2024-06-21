import java.util.Scanner;

public class bee1038 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int codigo = scanner.nextInt();
        int quantidade = scanner.nextInt();

        Pedido pedido = new Pedido(codigo, quantidade);
        pedido.printTotal();


        scanner.close();
    }
}

class Pedido {
    private int codigo;
    private int quantidade;
    private double preco; 
    
    Pedido(int codigo, int quantidade) {
        this.codigo = codigo;
        this.quantidade = quantidade;

        switch (codigo) {
            case 1:
                this.preco = 4.0;
                break;
            case 2:
                this.preco = 4.5;
                break;
            case 3:
                this.preco = 5.0;
                break;
            case 4:
                this.preco = 2.0;
                break;
            case 5:
                this.preco = 1.5;
                break;
            default:
                this.preco = 0;
                break;
        }
    }

    void printTotal() {
        System.out.printf("Total: R$ %.2f%n", preco * quantidade);
    }
}