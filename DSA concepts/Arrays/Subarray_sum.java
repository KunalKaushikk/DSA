import java.util.*;

public class Subarray_sum {
    // Total number of subarrays make sum equal to k in an array
    public static int num_of_subrr(int arr[], int target) {
        Map<Integer, Integer> sum_map = new HashMap<>();
        sum_map.put(0, 1); // Initially sum 0 with count 1;
        int cummulative_sum = 0;
        int count = 0;
        for (int it : arr) {
            cummulative_sum += it;
            if (sum_map.containsKey(cummulative_sum - target)) {
                count += sum_map.get(cummulative_sum - target);
            }

            sum_map.put(cummulative_sum, sum_map.getOrDefault(cummulative_sum, 0) + 1);
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Size of arr");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Elements of array");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Taget");
        int target = sc.nextInt();
        System.out.println(num_of_subrr(arr, target));
    }
}
