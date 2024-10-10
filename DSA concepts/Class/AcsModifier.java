import java.util.*;

class myEmp {
    int id;
    private String name;
    private int emp_id; // can't access from object in main class
    // for data hiding

    public void setName(String n) {
        name = n;
    }

    public String getName() {
        return name;
    }

    public void SetId(int i) {
        id = i;
    }

    public int getId() {
        return id;
    }

}

public class AcsModifier {
    // private public default protected
    public static void main(String[] args) {
        myEmp e = new myEmp();
        e.setName("Kunal");
        System.out.println(e.getName());
    }
}
