import java.util.Scanner;

public class bee1176 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int nTest = input.nextInt();
        
        long[] fiboArray = getFiboArray();

        for(int i = 0; i < nTest; i++) {
            int N = input.nextInt();
            System.out.printf("Fib(%d) = %d\n", N, fiboArray[N]);
        }

        input.close();
    }

    public static long[] getFiboArray() {
        long[] fiboArray = new long[61];
        fiboArray[0] = 0;
        fiboArray[1] = 1;

        for (int i = 2; i < fiboArray.length; i++) {
            fiboArray[i] = fiboArray[i - 1] + fiboArray[i - 2];
        }

        return fiboArray;
    }
}
