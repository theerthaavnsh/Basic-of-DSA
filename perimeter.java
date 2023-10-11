/* write a java program to find perimeter of two rectangles using constructors, allowing user to input the required values(use default constructor and parameterized constructor to initialize values)*/

import java.util.Scanner;

class Rectangle {
    private double length;
    private double width;

    // Default constructor
    public Rectangle() 
    {
        length = 0;
        width = 0;
    }

    // Parameterized constructor
    public Rectangle(double length, double width)
     {
        this.length = length;
        this.width = width;
    }

    public double calculatePerimeter() 
    {
    
        return 2 * (length + width);
    }
}

public class perimeter 
{
    public static void main(String[] args) 
    {
        Scanner scanner = new Scanner(System.in);

        // Create the first rectangle using the default constructor
        Rectangle rectangle1 = new Rectangle();
        System.out.println("Enter the length of the first rectangle:");
        double length1 = scanner.nextDouble();
        System.out.println("Enter the width of the first rectangle:");
        double width1 = scanner.nextDouble();

        // Use the parameterized constructor to set values for the first rectangle
        rectangle1 = new Rectangle(length1, width1);

        // Create the second rectangle using the default constructor
        Rectangle rectangle2 = new Rectangle();
        System.out.println("Enter the length of the second rectangle:");
        double length2 = scanner.nextDouble();
        System.out.println("Enter the width of the second rectangle:");
        double width2 = scanner.nextDouble();

        // Use the parameterized constructor to set values for the second rectangle
        rectangle2 = new Rectangle(length2, width2);

        // Calculate and display the perimeters of both rectangles
        double perimeter1 = rectangle1.calculatePerimeter();
        double perimeter2 = rectangle2.calculatePerimeter();

        System.out.println("Perimeter of the first rectangle: " + perimeter1);
        System.out.println("Perimeter of the second rectangle: " + perimeter2);

        scanner.close();
    }
}

