import java.util.Scanner;

public class StringOperationsMenu {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        String text = "";
        StringBuffer buffer = new StringBuffer();

        while (true) {
            System.out.println("Menu:");
            System.out.println("1. Insert a string in another string at a given position");
            System.out.println("2. Modify a character at a given position");
            System.out.println("3. Append a string");
            System.out.println("4. Exit");
            System.out.print("Enter your choice (1/2/3/4): ");

            int choice = scanner.nextInt();
            scanner.nextLine(); // Consume the newline character

            switch (choice) {
                case 1:
                    System.out.print("Enter the main string: ");
                    text = scanner.nextLine();
                    System.out.print("Enter the string to insert: ");
                    String insertString = scanner.nextLine();
                    System.out.print("Enter the position to insert: ");
                    int position = scanner.nextInt();
                    text = insertString(text, insertString, position);
                    break;

                case 2:
                    System.out.print("Enter the string: ");
                    text = scanner.nextLine();
                    System.out.print("Enter the position to modify: ");
                    int modifyPosition = scanner.nextInt();
                    System.out.print("Enter the character to replace with: ");
                    char replacement = scanner.next().charAt(0);
                    text = modifyCharacter(text, modifyPosition, replacement);
                    break;

                case 3:
                    System.out.print("Enter the string to append: ");
                    String appendString = scanner.nextLine();
                    buffer.append(appendString);
                    break;

                case 4:
                    System.out.println("Exiting the program.");
                    scanner.close();
                    System.exit(0);

                default:
                    System.out.println("Invalid choice. Please select a valid option.");
            }

            System.out.println("Updated String: " + text);
            System.out.println("Updated StringBuffer: " + buffer);
        }
    }

    // Function to insert a string into another string at a given position
    public static String insertString(String original, String toInsert, int position) {
        if (position < 0 || position > original.length()) {
            System.out.println("Invalid position for insertion.");
            return original;
        }
        return original.substring(0, position) + toInsert + original.substring(position);
    }

    // Function to modify a character at a given position
    public static String modifyCharacter(String original, int position, char replacement) {
        if (position < 0 || position >= original.length()) {
            System.out.println("Invalid position for modification.");
            return original;
        }
        char[] charArray = original.toCharArray();
        charArray[position] = replacement;
        return new String(charArray);
    }
}
