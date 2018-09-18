import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] a = new int[5];
        int[] count = new int[5];
        int N, temp;
        N = in.nextInt();
        for(int i = 0; i < N; i++) {
            temp = in.nextInt();
            int x = temp % 5;
            switch(x) {
                case 0 :
                    if(temp % 2 == 0) {
                        a[0] += temp;
                        count[0]++;
                    }
                    break;
                case 1:
                    count[1]++;
                    if(count[1] % 2 == 1) {
                        a[1] += temp;
                    } else {
                        a[1] -= temp;
                    }
                    break;
                case 2:
                    count[2]++;
                    a[2]++;
                    break;
                case 3:
                    a[3] += temp;
                    count[3]++;
                    break;
                default:
                    if(a[4] < temp) {
                        a[4] = temp;
                        count[4]++;
                    }
            }
        }
        for(int i = 0; i < 5; i++) {
            if(count[i] == 0) {
                System.out.printf("N");
            } else {
                if(i == 0) {
                    System.out.printf("%d", a[0]);
                } else if(i == 1) {
                    System.out.printf("%d", a[1]);
                } else if(i == 2) {
                    System.out.printf("%d", a[2]);
                } else if(i == 3) {
                    System.out.printf("%.1f", (double) a[3] / (double) count[3]);
                } else if(i == 4) {
                    System.out.printf("%d", a[4]);
                }
            }
            if(i != 4) {
                System.out.printf(" ");
            }
        }
    }

}