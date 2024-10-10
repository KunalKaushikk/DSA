import java.util.*;

public class mergepractice {
    public static void conquer(int arr[], int start, int mid, int end) {
        int index1 = start;
        int index2 = mid + 1;
        int x = 0;
        int newArr[] = new int[end - start + 1];
        while (index1 <= mid && index2 <= end) {
            if (arr[index1] <= arr[index2]) {
                newArr[x++] = arr[index1++];
            } else {
                newArr[x++] = arr[index2++];
            }
        }
        while (index1 <= mid) {
            newArr[x++] = arr[index1++];
        }
        while (index2 <= end) {
            newArr[x++] = arr[index2++];
        }
        for (int i = 0, j = start; i < newArr.length; i++, j++) {
            arr[j] = newArr[i];
        }
    }

    public static void divide(int arr[], int start, int end) {
        if (start >= end) {
            return;
        } else {
            int mid = start + (end - start) / 2;
            divide(arr, start, mid);
            divide(arr, mid + 1, end);
            conquer(arr, start, mid, end);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of array");
        int a = sc.nextInt();
        int arr[] = new int[a];
        for (int i = 0; i < a; i++) {
            arr[i] = sc.nextInt();
        }
        divide(arr, 0, a - 1);
        for (int i = 0; i < a; i++) {
            System.out.print(arr[i] + " ");
        }
    }
}
