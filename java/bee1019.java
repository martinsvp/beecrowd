import java.util.Scanner;

class Tempo {
    private int segundos;

    Tempo(int segundos) {
        this.segundos = segundos;
    }

    void showTempo() {
        int horas = segundos / 3600;
        int resto = segundos % 3600;

        int minutos = resto / 60;
        resto %= 60;

        System.out.println(horas + ":" + minutos + ":" + resto);
    }
}

public class bee1019 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int segundos = input.nextInt();

        Tempo tempo = new Tempo(segundos);
        tempo.showTempo();

        input.close();
    }
 
}
