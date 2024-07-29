public class LinkedList<T> {
    class Node {
        T val;
        Node next;

        Node(T data) {
            val = data;
            next = null;
        }
    }

    Node head;

    LinkedList() {
        head = null;
    }

    public void InsetAtBegging(T data) {
        Node newNode = new Node(data);

        if (head == null) {
            head = newNode;
        } else {
            newNode.next = head;
            head = newNode;
        }
    }

    public void display() {// linked list traversal
        Node temp = head;
        System.out.print("datas are ");
        while (temp != null) {
            System.out.print(temp.val + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    public void InsertAtLast(T data) {

        if (head == null) {
            throw new IndexOutOfBoundsException();
        }
        Node newNode = new Node(data);
        Node temp = head;
        Node prev = head;
        while (temp != null) {
            prev = temp;
            temp = temp.next;
        }
        prev.next = newNode;
    }

    public void insertAtPos(T data, int pos) {
        if (pos == 0) {
            InsetAtBegging(data);
            return;
        }

        Node newNode = new Node(data);
        Node temp = head;
        for (int i = 0; i < pos - 1; i++) {
            temp = temp.next;
            if (temp == null) {
                System.out.println("Invaild");
                return;
            }
        }
        newNode.next = temp.next;
        temp.next = newNode;
    }

    public void delAtBeg() {
        head = head.next;
    }

    public void delAtPos(int pos) {
        Node temp = head;
        Node prev = head;
        if (pos == 0) {
            delAtBeg();
            return;
        }
        for (int i = 0; i < pos; i++) {
            prev = temp;
            temp = temp.next;
        }

        prev.next = temp.next;

    }

    public void reverse() {
        Node prev = null;
        Node current = head;
        Node next = head.next;
        while (current != null) {
            next = current.next;
            current.next = prev;
            prev = current;
            current = next;
        }
        head = prev;
    }
}
