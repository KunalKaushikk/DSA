import java.util.*;

class student {
    int id;
    String name;
    float score;

    public void student_detail(Scanner sc) {
        id = sc.nextInt();
        sc.nextLine();
        name = sc.nextLine();
        score = sc.nextFloat();
        sc.nextLine();
        System.out.println(id + " " + name + " " + score);
    }
}

class details extends student {
    String school;
}

public class OOPS {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        details s = new details();
        s.student_detail(sc);
    }
}
