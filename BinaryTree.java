class BinaryTree {

    Node root = null;

    class Node {
        int val;
        Node left, right;

        Node(int val) {
            this.val = val;
            this.left = null;
            this.right = null;
        }
    }

    BinaryTree(int val) {

        root = new Node(val);
    }

    public void inserAtLeft(Node r, int val) {
        Node newNode = new Node(val);
        r.left = newNode;
    }

    public void inserAtRight(Node r, int val) {
        Node newNode = new Node(val);
        r.right = newNode;
    }

    public static void preOrder(Node r) {
        if (r != null) {
            System.out.print(r.val + " ");
            preOrder(r.left);
            preOrder(r.right);
        }
    }

    public static void inOrder(Node r) {
        if (r != null) {
            inOrder(r.left);
            System.out.print(r.val + " ");
            inOrder(r.right);
        }
    }

    public static void postOrder(Node r) {
        if (r != null) {
            postOrder(r.left);
            postOrder(r.right);
            System.out.print(r.val + " ");
        }
    }
}

class Main {
    public static void main(String[] args) {
        BinaryTree tree = new BinaryTree(10);
        tree.inserAtRight(tree.root, 15);
        tree.inserAtLeft(tree.root, 5);
        tree.inserAtLeft(tree.root.left, 3);
        tree.inserAtRight(tree.root.left, 8);
        tree.inserAtLeft(tree.root.right, 12);
        BinaryTree.preOrder(tree.root);
        System.out.println();
        BinaryTree.inOrder(tree.root);
        System.out.println();
        BinaryTree.postOrder(tree.root);

    }
}