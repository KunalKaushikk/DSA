import java.util.*;

public class productExceptSelf {
    // return an array of product without the product of self
    public static int[] product(int arr[], int index) {
        int product[] = new int[arr.length];
        for (int i = 0; i < arr.length; i++) {

        }
        return product;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("length of array");
        int sz = sc.nextInt();
        int arr[] = new int[sz];
        for (int i = 0; i < sz; i++) {
            arr[i] = sc.nextInt();
        }
        System.out.println("Index");
        int index = sc.nextInt();
        System.out.println(product(arr, index));
    }
}
