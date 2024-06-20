import java.util.Scanner;

public class bee1011 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        int ray = input.nextInt();
        double volume = getVolume(ray);

        System.out.printf("VOLUME = %.3f\n", volume);

        input.close();
    }

    public static double getVolume(int ray) {
        return (4/3.0) * 3.14159 * Math.pow(ray, 3);
    }
}
