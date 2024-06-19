import java.util.Scanner;

public class bee1061 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        input.next();
        int diaInicio = input.nextInt();
        
        input.nextLine();
        String horarioInicioStr = input.nextLine().trim();
        String[] partesInicio = horarioInicioStr.split(":");

        int horaInicio = Integer.parseInt(partesInicio[0].trim());
        int minutoInicio = Integer.parseInt(partesInicio[1].trim());
        int segundoInicio = Integer.parseInt(partesInicio[2].trim());

        input.next();
        int diaFim = input.nextInt();
        
        input.nextLine();
        String horarioFimStr = input.nextLine().trim();
        String[] partesFim = horarioFimStr.split(":");

        int horaFim = Integer.parseInt(partesFim[0].trim());
        int minutoFim = Integer.parseInt(partesFim[1].trim());
        int segundoFim = Integer.parseInt(partesFim[2].trim());

        int tempoInicioSegundos = calculaTempoSegundos(diaInicio, horaInicio, minutoInicio, segundoInicio);
        int tempoFimSegundos = calculaTempoSegundos(diaFim, horaFim, minutoFim, segundoFim);

        int diferencaSegundo = tempoFimSegundos - tempoInicioSegundos;

        Tempo tempoFormatado = new Tempo(diferencaSegundo);

        tempoFormatado.mostraTempo();

        input.close();
    }

    public static int calculaTempoSegundos(int dia, int hora, int minuto, int segundo) { 
        return dia*86400 + hora*3600 + minuto*60 + segundo;
    }
 
}

class Tempo {
    private int tempo;

    Tempo(int tempo) {
        this.tempo = tempo;
    }

    public void mostraTempo() {
        int dias = tempo / 86400;
        int resto = tempo % 86400;

        int horas = resto / 3600;
        resto %= 3600;

        int minutos = resto / 60;
        int segundos = resto % 60;


        System.out.println(dias + " dia(s)");
        System.out.println(horas + " hora(s)");
        System.out.println(minutos + " minuto(s)");
        System.out.println(segundos + " segundo(s)");
    }
}