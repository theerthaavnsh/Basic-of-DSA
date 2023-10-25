import java.util.Scanner;

public class string1 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String inputString = scanner.nextLine();

        System.out.print("Enter the character to find the frequency: ");
        char characterToFind = scanner.next().charAt(0);

        int frequency = 0;
        for (int i = 0; i < inputString.length(); i++) {
            if (inputString.charAt(i) == characterToFind) {
                frequency++;
            }
        }

        System.out.println("Frequency of '" + characterToFind + "' in the string is: " + frequency);

        scanner.close();
    }
}
