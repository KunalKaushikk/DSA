import java.util.*;

public class string {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String name = "Kunal Kaushik"; // Immutable
        // System.out.println(name + " " + name.length());
        // System.out.println(name.toLowerCase());
        // System.out.println(name.toUpperCase());
        // System.out.println(name.substring(0, 2));
        // System.out.println(name + " " + name.length());
        // System.out.println(name.substring(4, 12));
        // System.out.println(name.replace("Ku", "vl"));
        // System.out.println(name.startsWith("Ku"));
        // System.out.println(name.charAt(0));
        // System.out.println(name.charAt(3));
        // System.out.println(name.charAt(5)); // space
        // System.out.println(name.indexOf("a")); // first come will be returned
        // System.out.println(name.indexOf('k', 5)); // starts from index 5 and shows
        // last
        // System.out.println(name.lastIndexOf("a"));
        // System.out.println(name.lastIndexOf("K", 8));
        // System.out.println(name.equals(name.subSequence(5, 8)));

        String one = "Pawan kumar";
        String two = "pawan Kumar";
        boolean result;
        boolean result1 = one.equals(two);
        System.out.println(result1); // case sensitive
        result = one.equalsIgnoreCase(two);
        System.out.println(result);
        System.out.println(one.compareTo(two));
        System.out.println(two.compareTo(name));
    }
}
