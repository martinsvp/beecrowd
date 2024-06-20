import java.util.Scanner;

public class bee1165 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int N = input.nextInt();

        for(int i = 0; i < N; i++) {
            int div = 0;
            int number = input.nextInt();

            for(int j = 1; j <= number; j++) {
                if(number % j == 0) {
                    div++;
                }
            }

            if(div > 2) {
                System.out.println(number + " nao eh primo");
            } else {
                System.out.println(number + " eh primo");
            }
        }

        input.close();
    }
}
