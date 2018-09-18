package Basic;

import java.util.Scanner;

/**
 * @author 余修文
 * @date 2018/9/18 13:28
 */
public class B1016 {

    public static void main(String[ ] args) {
        Scanner in = new Scanner(System.in);
        long A, countA = 0, B, countB = 0;
        int Da, Db;
        A = in.nextInt();
        Da = in.nextInt();
        B = in.nextInt();
        Db = in.nextInt();
        while (A != 0) {
            if(A % 10 == Da) {
                countA = countA * 10 + Da;
            }
            A = A / 10;
        }
        while (B != 0) {
            if (B % 10 == Db) {
                countB = countB * 10 + Db;
            }
            B = B / 10;
        }
        System.out.println((countA + countB));
    }

}
