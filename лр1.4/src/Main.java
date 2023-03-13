//С клавиатуры вводятся по очереди координаты N точек (N задается пользователем с клавиатуры).
// Определить, сколько из них попадает в круг радиусом R (R задается пользователем с клавиатуры) с центром в точке (0, 0).
import java.util.Scanner;
public class Main {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int pointsInCircle = 0; //pointsInCircle - это количество точек, попавших в окружность

        System.out.println("Введите количество точек: ");
        int numberOfPoints = in.nextInt();
        while ( numberOfPoints < 1 ) {
            System.out.println("Недопустимое значение, введите число >= 1");
            numberOfPoints = in.nextInt();
        }
        System.out.println("Введите радиус окружности: ");
        int circleRadius = in.nextInt();
        while (circleRadius < 1) {
            System.out.println("Недопустимое значение, введите число >= 1");
            circleRadius = in.nextInt();
        }

        for (int i = 1; i<= numberOfPoints; i++) {
            System.out.println("Введите координату X "+ i +" точки: ");
            int xi = in.nextInt();
            System.out.println("Введите координату Y " + i + " точки: ");
            int yi = in.nextInt();

            if ( (xi * xi) + (yi * yi) <= circleRadius * circleRadius) {
                pointsInCircle = pointsInCircle +1;
            }
        }
        System.out.println( pointsInCircle + " точек попали в окружность");

    }
}