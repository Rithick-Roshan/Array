
import java.lang.reflect.Array;
import java.util.*;;

/**
 * DynamicArray
 */
class DynamicArray {
    private static final int intial = 16;
    private int arr[];
    private int size;
    private int capacity;

    DynamicArray() {
        size = 0;
        arr = new int[intial];
        capacity = intial;
    }

    public void add(int data) {
        if (size == capacity) {
            expandArray();
        }
        arr[size++] = data;
    }

    private void expandArray() {
        capacity = capacity * 2;
        arr = java.util.Arrays.copyOf(arr, capacity);
    }

    public void display() {
        for (int i = 0; i < size; i++) {
            System.out.print(arr[i] + ' ');
        }
        System.out.println();
    }
}

class DynamicArrayMain {
    public static void main(String[] args) {
        int val, pos;
        Scanner scan = new Scanner(System.in);
        DynamicArray list = new DynamicArray();

        while (true) {
            System.out.println("\n -------- List Menu -----------\n");
            System.out.println("1.Insert at End\n");
            System.out.println("2.Display the list\n");
            System.out.println("3.Insert at specified position \n");
            System.out.println("4.Delete from specified position\n");
            System.out.println("5.Exit\n");
            System.out.println("\n--------------------------------------\n");
            System.out.println("Enter your choice:\t");
            int choice = scan.nextInt();
            switch (choice) {
                case 1:
                    System.out.println("Enter your data");
                    int data = scan.nextInt();
                    list.add(data);
                    break;
                case 2:
                    list.display();

                default:
                    System.out.println("Invalid");
                    break;
            }
        }

    }
}