import java.util.*;

public class bst {
    static class Node {
        int data;
        Node left, right;

        Node(int data) {
            this.data = data;
            this.left = null;
            this.right = null;
        }
    }

    Node head;

    public static Node buildTree(Node root, int value) {
        if (root == null) {
            root = new Node(value);
            return root;
        }
        if (root.data > value) {
            root.left = buildTree(root.left, value);
        } else {
            root.right = buildTree(root.right, value);
        }
        return root;
    }

    public static void order(Node root) {
        if (root == null) {
            return;
        }
        // root l r preorder
        // l root r inorder
        // l r root postorder
        System.out.print(root.data + " "); // Root left right
        order(root.left);
        order(root.right);
    }

    public static void main(String[] args) {
        int values[] = { 5, 1, 3, 4, 2, 7 };
        Node root = null;
        for (int i = 0; i < values.length; i++) {
            root = buildTree(root, values[i]);
        }
        order(root);
    }
}

/*
 * import java.util.*;
 * 
 * public class BST {
 * 
 * static class Node {
 * int data;
 * Node left, right;
 * 
 * Node(int data) {
 * this.data = data;
 * this.left = null;
 * this.right = null;
 * }
 * }
 * 
 * public static Node buildTree(Node root, int val) {
 * if (root == null) {
 * root = new Node(val);
 * return root;
 * }
 * if (root.data > val) {
 * root.left = buildTree(root.left, val);
 * } else {
 * root.right = buildTree(root.right, val);
 * }
 * return root;
 * }
 * 
 * public static void Inorder(Node root) {
 * if (root == null) {
 * return;
 * }
 * Inorder(root.left);
 * System.out.print(root.data + " ");
 * Inorder(root.right);
 * }
 * 
 * public static void main(String[] args) {
 * int values[] = { 5, 1, 3, 4, 2, 7 };
 * Node root = null;
 * for (int i = 0; i < values.length; i++) {
 * root = buildTree(root, values[i]);
 * }
 * Inorder(root);
 * System.out.println();
 * }
 * }
 */