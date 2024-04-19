import java.util.Scanner;

public class bee1004 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int n1 = input.nextInt();
        int n2 = input.nextInt();

        System.out.println("PROD = " + n1*n2);

        input.close();
    }
}
