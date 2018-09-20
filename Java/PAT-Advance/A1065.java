import java.util.Scanner;

/**
 * @author 余修文
 * @date 2018/9/20 9:23
 */
public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int t;
        long a, b, c, count;
        t = in.nextInt();
        for(int i = 1; i <= t; i++) {
            boolean isFlag;
            a = in.nextLong();
            b = in.nextLong();
            c = in.nextLong();
            count = a + b;
            if(count < 0 && a > 0 && b > 0) {
                isFlag = true;
            } else if(count >= 0 && a < 0 && b < 0) {
                isFlag = false;
            } else if (count > c) {
                isFlag = true;
            } else {
                isFlag = false;
            }
            if(isFlag) {
                System.out.printf("Case #%d: true\n", i);
            } else {
                System.out.printf("Case #%d: false\n", i);
            }
        }
    }

}