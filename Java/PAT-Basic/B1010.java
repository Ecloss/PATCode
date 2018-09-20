import java.util.Scanner;


public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int a, b;
        boolean isFlag = false;
        while (in.hasNext()) {
            a = in.nextInt();
            b = in.nextInt();
            if(b != 0) {
                if(isFlag == false) {
                    System.out.printf("%d", a * b);
                } else {
                    System.out.printf(" %d", a * b);
                }
                System.out.printf(" %d", b-1);
                isFlag = true;
            }
        }
        if(isFlag == false) {
            System.out.printf("0 0");
        }
    }

}