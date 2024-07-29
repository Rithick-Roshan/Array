import java.util.*;

public class stack {
    stacknode top;

    class stacknode {
        int val;
        stacknode next;

        stacknode(int val) {
            this.val = val;
            this.next = null;
        }
    }

    boolean isempty() {
        if (top == null) {
            return true;
        }
        return false;
    }

    void push(int val) {
        stacknode ptr = new stacknode(val);
        ptr.next = top;
        top = ptr;
    }

    void pop() {
        if (isempty()) {
            System.out.println("underflow");
            return;
        } else {
            top = top.next;
        }
    }

    void display() {
        stacknode temp = top;
        while (temp != null) {
            System.out.print(temp.val + " ");
            temp = temp.next;
        }
        System.out.println();
    }

    public static void main(String[] args) {
        stack ls = new stack();
        ls.pop();
        ls.push(3);
        ls.push(2);
        ls.push(1);
        ls.display();
        ls.pop();
        ls.display();
        Stack<Integer> obj = new Stack<>();
        obj.push(5);
        obj.push(50);
        for (Integer i : obj) {
            System.out.print(i + " ");
        }
        System.out.print(obj.pop());
    }
}
