import java.util.Scanner;

public class Main {

    static int maxn = 110;
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] a = new int[maxn];
        int N, M, count = 0;
        N = in.nextInt();
        M = in.nextInt();
        M = M % N;
        for(int i = 0; i < N; i++) {
            a[i] = in.nextInt();
        }
        in.close();
        for(int i = N - M; i < N; i++) {
            System.out.print(a[i]);
            count++;
            if(count != N) {
                System.out.print(" ");
            }
        }
        for (int i = 0; i < N- M; i++) {
            System.out.print(a[i]);
            count++;
            if(count != N) {
                System.out.print(" ");
            }
        }
    }

}