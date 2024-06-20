import java.util.Scanner;

public class bee1151 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int N = input.nextInt();
        for (int i = 0; i < N - 1; i++) {
            System.out.printf("%d ", fibo(i));
        }
        System.out.println(fibo(N - 1));

        input.close();
    }

    public static int fibo (int N) {
        if (N < 2) {
            return N;
        } else {
            return fibo(N - 1) + fibo(N - 2);
        }
    }
}