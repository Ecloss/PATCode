import java.util.Scanner;

/**
 * @author 余修文
 * @date 2018/9/19 9:43
 */
public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        char hand[] = new char[3];
        hand[0] = 'B'; hand[1] = 'C'; hand[2] = 'J';
        char a, b;
        int aHand[] = new int[3];
        int bHand[] = new int[3];
        int aWin, bWin, count, aMax = -1, bMax = -1, N;
        N = in.nextInt();
        for(int i = 0; i < N; i++) {
            a = in.next().charAt(0);
            b = in.next().charAt(0);
            if(a == 'B' && b == 'C') {
                aHand[0]++;
            } else if(a == 'B' && b == 'J') {
                bHand[2]++;
            } else if(a == 'C' && b == 'B') {
                bHand[0]++;
            } else if(a == 'C' && b == 'J') {
                aHand[1]++;
            } else if(a == 'J' && b == 'B') {
                aHand[2]++;
            } else if(a == 'J' && b == 'C') {
                bHand[1]++;
            }
        }
        in.close();
        aWin = aHand[0] + aHand[1] + aHand[2];
        bWin = bHand[0] + bHand[1] + bHand[2];
        count = N - aWin - bWin;
        System.out.printf("%d %d %d\n", aWin, count, bWin);
        System.out.printf("%d %d %d\n", bWin, count, aWin);
        int aC = 0, bC = 0;
        for(int i = 0; i < 3; i++) {
            if(aMax < aHand[i]) {
                aMax = aHand[i];
                aC = i;
            }
            if(bMax < bHand[i]) {
                bMax = bHand[i];
                bC = i;
            }
        }
        System.out.printf("%c %c", hand[aC], hand[bC]);
    }

}
