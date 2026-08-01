import java.util.Scanner;

public class BinarySearchExample {

    public static void main(String[] args) {

        int[] arr = {5, 10, 15, 20, 25, 30, 35, 40};

        Scanner sc = new Scanner(System.in);

        System.out.print("Enter element to search: ");
        int key = sc.nextInt();

        int low = 0;
        int high = arr.length - 1;
        int found = -1;

        while (low <= high) {

            int mid = (low + high) / 2;

            if (arr[mid] == key) {
                found = mid;
                break;
            } else if (key < arr[mid]) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }

        if (found != -1)
            System.out.println("Element found at index " + found);
        else
            System.out.println("Element not found.");

        sc.close();
    }
}