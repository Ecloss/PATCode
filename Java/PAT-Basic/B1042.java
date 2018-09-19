import java.util.Scanner;

/**
 * @author 余修文
 * @date 2018/9/19 10:39
 */
public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        String str;
        char b;
        int[] count = new int[26];
        int maxn = -1, loc = 0;
        str = in.nextLine();
        for (int i = 0;  i < str.length(); i++) {
            b = str.charAt(i);
            if(b >= 'a' && b <= 'z') {
                count[b - 'a']++;
            } else if (b >= 'A' && b <= 'Z') {
                count[b - 'A']++;
            }
        }
        in.close();
        for (int i = 0; i < 26; i++) {
            if (count[i] > maxn) {
                maxn = count[i];
                loc = i;
            }
        }
        b = (char)('a' + loc);
        System.out.printf("%c %d\n", b, maxn);
    }

}