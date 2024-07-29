
// You are using Java
import java.util.*;

class Search {

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int n;
        n = scan.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scan.nextInt();
        }
        scan.nextLine();
        String str = scan.nextLine();
        char ch = scan.next().charAt(0);
        int r = scan.nextInt();
        int c = scan.nextInt();
        int[][] a = new int[r][c];
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                a[i][j] = scan.nextInt();
            }
        }
        List.display(arr);
        System.out.println(List.find(arr, 0));
        System.out.println(List.contains(arr, 3));
        System.out.println(List.find(str, ch));
        System.out.println(List.contains(str, 'e'));
        List.display(a);
        Arrays.sort(arr);
        List.display(arr);
        int index = 0;
        int[] ns = new int[r * c];
        for (int[] ls : a) {
            for (int i : ls) {
                ns[index++] = i;
            }
        }
        index = 0;
        Arrays.sort(ns);
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                a[i][j] = ns[index++];
            }
        }
        List.display(a);
    }
}

class List {
    public static void display(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    public static int find(int[] arr, int val) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            if (arr[i] == val) {
                return i + 1;
            }
        }
        return -1;
    }

    public static boolean contains(int[] arr, int val) {
        int n = arr.length;
        for (int i = 0; i < n; i++) {
            if (arr[i] == val) {
                return true;
            }
        }
        return false;
    }

    public static int find(String s, char ch) {
        int i = 1;
        for (char c : s.toCharArray()) {
            if (c == ch) {
                return i;
            }
            i++;
        }
        return -1;
    }

    public static boolean contains(String s, char ch) {
        int i = 1;
        for (char c : s.toCharArray()) {
            if (c == ch) {
                return true;
            }
            i++;
        }
        return false;
    }

    public static void display(int[][] a) {
        int r = a.length;
        int c = a[0].length;
        for (int i = 0; i < r; i++) {
            for (int j = 0; j < c; j++) {
                System.out.print(a[i][j] + " ");
            }
            System.out.println();
        }
    }
}