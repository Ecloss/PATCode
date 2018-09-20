import java.util.Scanner;

public class Main {

    static int maxn = 110;
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String[] py = new String[10];
        py[0] = "ling"; py[1] = "yi"; py[2] = "er"; py[3] = "san"; py[4] = "si";
        py[5] = "wu"; py[6] = "liu"; py[7] = "qi"; py[8] = "ba"; py[9] = "jiu";
        String str;
        str = in.nextLine();
        int a = 0;
        for(int i = 0; i < str.length(); i++) {
            a += str.charAt(i) - '0';
        }
        int[] array = new int[10];
        int j = 0, k = 0;
        while (a != 0) {
            array[j++] = a % 10;
            a = a / 10;
        }
        for (int i = j - 1; i >= 0; i--) {
            System.out.print(py[array[i]]);
            if(i != 0) {
                System.out.printf(" ");
            }
        }
    }

}