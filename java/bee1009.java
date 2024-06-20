import java.util.Scanner;

public class bee1009 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        String name = input.nextLine();
        double salaryFix = input.nextDouble();
        double totalSails = input.nextDouble();

        double salary = getSalary(salaryFix, totalSails);

        System.out.printf("TOTAL = R$ %.2f", salary);

        input.close();
    }

    public static double getSalary(double fix, double sails) {
        return fix + sails * 0.15f;
    }
}
