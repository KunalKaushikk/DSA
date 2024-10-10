import java.util.*;

public class Mergesort {
    public static void conquer(int arr[], int start, int mid, int end) {
        int newArr[] = new int[end - start + 1];
        int indx1 = start;
        int indx2 = mid + 1;
        int x = 0;
        while (indx1 <= mid && indx2 <= end) {
            if (arr[indx1] <= arr[indx2]) {
                newArr[x++] = arr[indx1++];
            } else {
                newArr[x++] = arr[indx2++];
            }
        }
        while (indx1 <= mid) {
            newArr[x++] = arr[indx1++];
        }
        while (indx2 <= end) {
            newArr[x++] = arr[indx2++];
        }
        for (int i = 0, j = start; i < newArr.length; i++, j++) {
            arr[j] = newArr[i];
        }
    }

    public static void divide(int[] arr, int start, int end) {
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
