import java.util.*;

public class msxmin {
    public static int maxele(int arr[]) {
        int min = arr[0];
        int max = (arr[0]);
        for (int i = 1; i < arr.length; i++) {
            if (max > arr[i]) {
                max = arr[i];
            }
            if (min < arr[i]) {
                min = arr[i];
            }
        }
        System.out.println(max);
        return min;
    }

    public static void main(String[] args) {
        int arr[] = { 4, 5, 1, 2, 7, 8 };
        System.out.println(maxele(arr));
    }
}
