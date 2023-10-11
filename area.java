/* write a java program to calculate the area of different shapes, namely circle rectangle and triangle using method overloading*/

import java.util.Scanner;

public class area
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        System.out.println("Choose a shape to calculate the area:");
        System.out.println("1. Circle");
        System.out.println("2. Rectangle");
        System.out.println("3. Triangle");

        int choice = scanner.nextInt();

        switch (choice) 
        {
            case 1:
                System.out.print("Enter the radius of the circle: ");
                double radius = scanner.nextDouble();
                double circleArea = calculateArea1(radius);
                System.out.println("Area of the circle: " + circleArea);
                break;

            case 2:
                System.out.print("Enter the length of the rectangle: ");
                double length = scanner.nextDouble();
                System.out.print("Enter the width of the rectangle: ");
                double width = scanner.nextDouble();
                double rectangleArea = calculateArea2(length, width);
                System.out.println("Area of the rectangle: " + rectangleArea);
                break;

            case 3:
                System.out.print("Enter the base of the triangle: ");
                double base = scanner.nextDouble();
                System.out.print("Enter the height of the triangle: ");
                double height = scanner.nextDouble();
                double triangleArea = calculateArea3(base, height);
                System.out.println("Area of the triangle: " + triangleArea);
                break;

            default:
                System.out.println("Invalid choice.");
                break;
        }

        scanner.close();
    }

    // Calculate area of a circle
    public static double calculateArea1(double radius)
     {
        return Math.PI * radius * radius;
    }

    // Calculate area of a rectangle
    public static double calculateArea2(double length, double width) 
    {
        return length * width;
    }

    // Calculate area of a triangle
    public static double calculateArea3(double base, double height) 
    {
        return 0.5 * base * height;
    }
}

