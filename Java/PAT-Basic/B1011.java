package Basic;

import java.util.Scanner;

/**
 * @author 余修文
 * @date 2018/9/18 11:43
 */
public class B1011 {

    public static void main(String[ ] args) {
        Scanner in = new Scanner(System.in);
        int T;
        long A, B, C;
        T = in.nextInt();
        for(int i = 1; i <= T; i++) {
            A = in.nextInt();
            B = in.nextInt();
            C = in.nextInt();
            if ((A + B) > C) {
                System.out.println("Case #" + i + ": true");
            } else {
                System.out.println("Case #" + i + ": false");
            }
        }
    }

}
