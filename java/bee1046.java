import java.util.Scanner;

public class bee1046 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int horaIni = scanner.nextInt();
        int horaFim = scanner.nextInt();
        int duracao = 0;

        if(horaIni < horaFim) {
            duracao = horaFim - horaIni;
        } else {
            duracao = (horaFim + 24) - horaIni;
        }

        System.out.println("O JOGO DUROU " + duracao + " HORA(S)");
        scanner.close();
    }
}
