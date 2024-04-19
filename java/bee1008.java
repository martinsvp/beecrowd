import java.util.Scanner;

public class bee1008 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int numberEmployee = input.nextInt();
        int hoursWorked = input.nextInt();
        double amountPerHour = input.nextDouble();

        System.out.println("NUMBER = " + numberEmployee);
        System.out.printf("SALARY = U$ %.2f\n", amountPerHour*hoursWorked);
    }
}
