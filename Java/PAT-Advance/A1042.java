import java.util.Scanner;

public class Main {

    static int maxn = 54;
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] start = new int[maxn+1];
        int[] end = new int[maxn+1];
        int[] next = new int[maxn+1];
        char[] str = new char[5];
        str[0] = 'S'; str[1] = 'H'; str[2] = 'C'; str[3] = 'D'; str[4] = 'J';
        int N;
        N = in.nextInt();
        for(int i = 1; i <= maxn; i++) {
            start[i] = i;
        }
        for (int i = 1; i <= maxn; i++) {
            next[i] = in.nextInt();
        }
        for (int i = 0; i < N; i++) {
            for (int j = 1; j <= maxn; j++) {
                end[next[j]] = start[j];
            }
            for (int k = 1; k <= maxn; k++) {
                start[k] = end[k];
            }
        }
        for (int i = 1; i <= maxn; i++) {
            if(i != 1) {
                System.out.print(" ");
            }
            start[i]--;
            System.out.printf("%c%d", str[start[i]/13], start[i]%13+1);
        }
    }

}
