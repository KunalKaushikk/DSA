import java.util.*;

public class mergeSortedLL {

    public static LinkedList<Integer> mergeTwoLists(LinkedList<Integer> l1, LinkedList<Integer> l2) {
        LinkedList<Integer> mergedList = new LinkedList<>();
        ListIterator<Integer> iter1 = l1.listIterator();
        ListIterator<Integer> iter2 = l2.listIterator();

        Integer val1 = iter1.hasNext() ? iter1.next() : null;
        Integer val2 = iter2.hasNext() ? iter2.next() : null;

        while (val1 != null || val2 != null) {
            if (val1 == null) {
                mergedList.add(val2);
                val2 = iter2.hasNext() ? iter2.next() : null;
            } else if (val2 == null) {
                mergedList.add(val1);
                val1 = iter1.hasNext() ? iter1.next() : null;
            } else if (val1 <= val2) {
                mergedList.add(val1);
                val1 = iter1.hasNext() ? iter1.next() : null;
            } else {
                mergedList.add(val2);
                val2 = iter2.hasNext() ? iter2.next() : null;
            }
        }

        return mergedList;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        LinkedList<Integer> l1 = new LinkedList<>();
        LinkedList<Integer> l2 = new LinkedList<>();
        System.out.println("No of elements in List 1");
        int e1 = sc.nextInt();
        System.out.println("No of elements in List 2");
        int e2 = sc.nextInt();
        for (int i = 0; i < e1; i++) {
            int a = sc.nextInt();
            l1.add(a);
        }
        for (int i = 0; i < e2; i++) {
            int a = sc.nextInt();
            l2.add(a);
        }
        System.out.println(l1);
        System.out.println(l2);
        System.out.println("Merged list");
        System.out.println(mergeTwoLists(l1, l2));
    }
}
