import java.util.*;

public class stack {
    public static void push(Stack<Integer> stack, int i) {
        stack.push(i);
    }

    public static void pop(Stack<Integer> stack) {
        stack.pop();
    }

    public static void print_stack(Stack<Integer> stack) {
        System.out.println(stack);
    }

    public static void main(String[] args) {
        Stack<Integer> stake = new Stack<Integer>();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter choice");
        int choice = sc.nextInt();
        while (choice != 4) {
            System.out.println("Enter operation");
            choice = sc.nextInt();
            switch (choice) {
                case 1:
                    int n = sc.nextInt();
                    stack.push(stake, n);
                case 2:
                    stack.pop(stake);
                case 3:
                    System.out.println(stack.print_stack(stake));
                default:
                    System.out.println("Enter choice");
                case 4:
                    break;
            }
        }
    }
}
