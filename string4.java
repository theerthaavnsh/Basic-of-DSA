import java.util.Scanner;

public class string4 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        
        System.out.print("Enter the number of strings: ");
        int n = scanner.nextInt();
        
        // Consume the newline character
        scanner.nextLine();
        
        String[] strings = new String[n];
        
        for (int i = 0; i < n; i++) {
            System.out.print("Enter string " + (i + 1) + ": ");
            strings[i] = scanner.nextLine();
        }
        
        sortStringsAlphabetically(strings);
        
        System.out.println("Sorted strings in alphabetical order:");
        for (String str : strings) {
            System.out.println(str);
        }
        
        scanner.close();
    }

    // Function to sort an array of strings alphabetically
    public static void sortStringsAlphabetically(String[] arr) {
        for (int i = 0; i < arr.length - 1; i++) {
            for (int j = i + 1; j < arr.length; j++) {
                if (arr[i].compareTo(arr[j]) > 0) {
                    // Swap the strings if they are out of order
                    String temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
}
