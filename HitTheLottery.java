//============================================================================
// problem-link: https://codeforces.com/problemset/problem/996/A
// status: accepted
//============================================================================

import java.util.Scanner;

public class HitTheLottery {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n = scanner.nextInt();
        int[] d = {100, 20, 10, 5, 1};
        int ans = 0;
        for (int j : d) {
            ans += n / j;
            n = n % j;
        }

        System.out.println(ans);
    }
}