import java.util.Scanner;

public class bee1012 {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);

        double A = input.nextDouble();
        double B = input.nextDouble();
        double C = input.nextDouble();

        showResults(A, B, C);

        input.close();
    }

    public static void showResults(double A, double B, double C) {
        System.out.printf("TRIANGULO: %.3f\n", getTriangleArea(A, C));
        System.out.printf("CIRCULO: %.3f\n", getCircleArea(C));
        System.out.printf("TRAPEZIO: %.3f\n", getTrapezeArea(A, B, C));
        System.out.printf("QUADRADO: %.3f\n", getSquareArea(B));
        System.out.printf("RETANGULO: %.3f\n", getRectangleArea(A, B));
    }

    public static double getTriangleArea(double A, double C) {
        return (A * C) / 2.0;
    }

    public static double getCircleArea(double C) {
        return C * C * 3.14159;
    }

    public static double getTrapezeArea(double A, double B, double C) {
        return ((A + B) * C) / 2.0;
    }

    public static double getSquareArea(double B) {
        return B * B;
    }

    public static double getRectangleArea(double A, double B) {
        return A * B;
    }
}
