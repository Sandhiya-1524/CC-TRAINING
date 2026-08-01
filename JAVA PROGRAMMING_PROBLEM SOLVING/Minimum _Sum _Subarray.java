public class MinimumSumSubarray {

    public static void main(String[] args) {

        int[] arr = {3, -4, 2, -3, -1, 7, -5};

        int minSum = arr[0];
        int current = arr[0];

        for (int i = 1; i < arr.length; i++) {

            current = Math.min(arr[i], current + arr[i]);

            minSum = Math.min(minSum, current);
        }

        System.out.println("Minimum Sum = " + minSum);
    }
}