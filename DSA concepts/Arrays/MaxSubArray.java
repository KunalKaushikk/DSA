import java.util.*;

public class MaxSubArray {
    public static int Max_SubArray(int[] arr) {
        // The subarray that makes heighest sum
        int maxSofar = arr[0];
        int maxEndinghere = arr[0];

        for (int i = 1; i < arr.length; i++) {
            maxEndinghere = Math.max(arr[i], maxEndinghere + arr[i]);
            maxSofar = Math.max(maxSofar, maxEndinghere);
        }
        return maxSofar;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter size of array");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Elements");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println(Max_SubArray(arr));
    }
}
