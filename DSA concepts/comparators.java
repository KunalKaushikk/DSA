import java.util.*;

public class comparators {
    public static void main(String[] args) {
        int a = 10, b = 20;
        if (a > 15 || b > 15) { // if any condition true, true
            System.out.println("Work");
        }
        if (!(a > 15 && b > 15)) { // ! , to show sout, if any condition false, false
            System.out.println("Not work");
        }
        boolean A = true;
        boolean B = false;
        System.out.println("Logical operators");
        System.out.println("Not A " + !A);
        System.out.println("Not B " + !B);
        System.out.println("And A,B " + (A & B));
        System.out.println("Or A and B " + (A || B));
        System.out.println("XOR A,B " + (A ^ B));
    }
}
