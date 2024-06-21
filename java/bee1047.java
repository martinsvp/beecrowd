import java.util.Scanner;

public class bee1047 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int horaIni = scanner.nextInt();
        int minIni = scanner.nextInt();
        int horaFim = scanner.nextInt();
        int minFim = scanner.nextInt();

        int totalMinIni = calculaTotalMinutos(horaIni, minIni);
        int totalMinFim = calculaTotalMinutos(horaFim, minFim);

        if (totalMinIni == totalMinFim) {
            System.out.println("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)");
        } else {
            int duracao;
            if (totalMinFim < totalMinIni) {
                totalMinFim += 24 * 60;
            }
            duracao = totalMinFim - totalMinIni;

            mostraValorFormatado(duracao);
        }

        scanner.close();
    }

    public static int calculaTotalMinutos(int hora, int min) {
        return hora * 60 + min;
    }

    public static void mostraValorFormatado(int min) {
        int horas = min / 60;
        int minutos = min % 60;

        System.out.println("O JOGO DUROU " + horas + " HORA(S) E " + minutos + " MINUTO(S)");
    }
}