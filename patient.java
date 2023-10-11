/*Create a class named patient that inlcudesan id no, age and blood data. Privide a default contructor that sets the id no to zero age to zero and the blood data values to 0 and 1. create an overloaded constructorthat provides values of each field. create another class test patient that demonstrates that each method works correctly.*/

import java.util.Scanner;


class Patient 
{
    private int id;
    private int age;
    private String bloodData;

    // default constructor
    public Patient() 
    {
        id = 0;
        age = 0;
        bloodData = "0/1";
    }

    // overloaded constructor
    public Patient(int id, int age, String bloodData) 
    {
        this.id = id;
        this.age = age;
        this.bloodData = bloodData;
    }

    public int getId() 
    {
        return id;
    }

    public int getAge() 
    {
        return age;
    }

    public String getBloodData() 
    {
        return bloodData;
    }
}

public class patient 
{
    public static void main(String[] args) 
    {
        // patient using the default constructor
        Patient patient1 = new Patient();
        System.out.println("Patient 1 ");
        System.out.println("ID: " + patient1.getId());
        System.out.println("Age: " + patient1.getAge());
        System.out.println("Blood Data: " + patient1.getBloodData());
        System.out.println();

        //patient using the overloaded constructor 
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter the patient's ID:");
        int id = scanner.nextInt();
        System.out.println("Enter the patient's age:");
        int age = scanner.nextInt();
        scanner.nextLine(); // Consume the newline character
        System.out.println("Enter the patient's blood data (e.g., 'A/B'): ");
        String bloodData = scanner.nextLine();

        Patient patient2 = new Patient(id, age, bloodData);
        System.out.println("\nPatient 2");
        System.out.println("ID: " + patient2.getId());
        System.out.println("Age: " + patient2.getAge());
        System.out.println("Blood Data: " + patient2.getBloodData());

        scanner.close();
    }
}

