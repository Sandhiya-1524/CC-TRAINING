public class MaximumSumK {

    public static void main(String[] args) {

        int[] arr = {1, 4, 2, 10, 23, 3, 1, 0, 20};

        int k = 4;

        int sum = 0;

        for (int i = 0; i < k; i++)
            sum += arr[i];

        int max = sum;

        for (int i = k; i < arr.length; i++) {

            sum = sum + arr[i] - arr[i - k];

            if (sum > max)
                max = sum;
        }

        System.out.println("Maximum Sum = " + max);
    }
}