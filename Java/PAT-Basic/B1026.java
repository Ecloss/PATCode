package Basic;

import java.util.Scanner;

/**
 * @author 余修文
 * @date 2018/9/18 13:44
 */
public class B1026 {

    final int CLK_TCK = 100;
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int c1, c2, count, time;
        c1 = in.nextInt();
        c2 = in.nextInt();
        count = c2 - c1;
        if(count % 100 >= 50) {
            time = count / 100 + 1;
        } else {
            time = count / 100;
        }
        System.out.printf("%02d:%02d:%02d", time/3600, time%3600/60, time%60);
    }

}
