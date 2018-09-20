import java.util.Scanner;

/**
 * 一个运行超时，建议使用C++
 */
public class A1046 {

    static int maxn = 100010;
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int away[] = new int[maxn];
        int a[] = new int[maxn];
        int n, m, sum = 0, left, right;
        n = in.nextInt();
        for(int i = 1; i <= n; i++) {
            a[i] = in.nextInt();
            sum += a[i];
            away[i] = sum;
        }
        m = in.nextInt();
        for(int i = 0; i < m; i++) {
            left = in.nextInt();
            right = in.nextInt();
            if(left > right) {
                int temo = left;
                left = right;
                right = temo;
            }
            int x = away[right - 1] - away[left - 1];
            int y = sum - x;
            System.out.printf("%d\n", x < y ? x : y);
        }
    }

}