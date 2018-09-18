import java.util.Scanner;

public class Main{

    public static void main(String[ ] args) {
        Scanner in = new Scanner(System.in);
        int len = 0, n;
        n = in.nextInt();
        while (n != 1) {
            if(n % 2 == 0) {
                n = n / 2;
            } else {
                n = (n * 3 + 1) / 2;
            }
            len++;
        }
        System.out.println(len);
    }

}