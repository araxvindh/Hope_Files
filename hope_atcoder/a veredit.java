import java.util.*;

public class FinalVerdict {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();  // Number of test cases
        
        while (t-- > 0) {
            int n = sc.nextInt();  // Length of array
            int x = sc.nextInt();  // Target final value

            int sum = 0;

            for (int i = 0; i < n; i++) {
                sum += sc.nextInt();
            }

            // Check if the sum can be reduced to x
            if (sum % n == 0 && sum / n == x) {
                System.out.println("YES");
            } else {
                System.out.println("NO");
            }
        }
        sc.close();
    }
}