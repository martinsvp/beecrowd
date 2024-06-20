import java.util.Scanner;

public class bee1143 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int numero = input.nextInt();

        for(int i = 1; i <= numero; i++) {
            Potencia quadrado = new Quadrado();
            Potencia cubo = new Cubo();

            int numeroQuadrado = quadrado.calcular(i);
            int numeroCubo = cubo.calcular(i);
            
            System.out.println(i + " " + numeroQuadrado + " " + numeroCubo );
        }

        input.close();
    }
 
}

interface Potencia {
    int calcular(int numero);
}

class Quadrado implements Potencia {
    public int calcular(int numero) {
        return numero * numero;
    }   
}

class Cubo implements Potencia {
    public int calcular(int numero) {
        return numero * numero * numero;
    }   
}