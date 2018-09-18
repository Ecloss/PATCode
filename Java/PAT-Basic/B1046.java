package Basic;

import java.util.Scanner;

/**
 * @author 余修文
 * @date 2018/9/18 14:21
 */
public class B1046 {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N, ah, a, bh, b;
        int aDrink = 0, bDrink = 0;
        N = in.nextInt();
        for(int i = 0; i < N; i++) {
            ah = in.nextInt();
            a = in.nextInt();
            bh = in.nextInt();
            b = in.nextInt();
            if(a == (ah + bh) && b != (ah + bh)) {
                bDrink++;
            } else if (a != (ah + bh) && b == (ah + bh)) {
                aDrink++;
            }
        }
        System.out.printf("%d %d", aDrink, bDrink);
    }

}
