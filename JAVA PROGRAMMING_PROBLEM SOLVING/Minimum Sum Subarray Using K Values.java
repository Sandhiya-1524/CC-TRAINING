public class MinimumSumK {

    public static void main(String[] args) {

        int[] arr = {4, 2, 1, 7, 8, 1, 2, 8};

        int k = 3;

        int sum = 0;

        for (int i = 0; i < k; i++)
            sum += arr[i];

        int min = sum;

        for (int i = k; i < arr.length; i++) {

            sum = sum + arr[i] - arr[i - k];

            if (sum < min)
                min = sum;
        }

        System.out.println("Minimum Sum = " + min);
    }
}