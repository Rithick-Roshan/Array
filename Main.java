
public class Main {
    public static void main(String[] args) {
        LinkedList<Integer> list = new LinkedList<Integer>();
        list.InsetAtBegging(5);
        list.InsetAtBegging(1);
        list.display();
        list.InsetAtBegging(3);
        list.insertAtPos(0, 1);
        list.display();
        list.delAtPos(1);
        list.display();
        list.InsertAtLast(6);
        list.display();
        LinkedList<String> list2 = new LinkedList<String>();
        list2.InsetAtBegging("hello");
        list2.InsetAtBegging("world");
        list2.display();
        list.reverse();
        list2.reverse();
        list.display();
        list2.display();
    }
}
