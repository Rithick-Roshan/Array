
import java.util.*;

class vaildp {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String s = scan.nextLine();

        Stack<Character> ls = new Stack();
        boolean temp = true;
        int l = s.length();
        if (l % 2 == 1) {
            System.out.println("false");
        } else {
            for (char c : s.toCharArray()) {
                if (c == '(' || c == '[' || c == '{') {
                    ls.push(c);
                } else {

                    if (ls.isEmpty()) {
                        temp = false;
                        break;
                    }
                    char top = ls.pop();
                    if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                        temp = false;
                        break;
                    }
                }
            }
            if (!temp) {
                System.out.println("false");
            } else {
                System.out.println(ls.isEmpty());
            }
        }

    }
}
