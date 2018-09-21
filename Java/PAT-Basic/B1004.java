package Basic;

import java.util.Scanner;

/**
 * @author 余修文
 * @date 2018/9/21 11:02
 */
class Stu1{
    String name, id;
    int grade;

    public Stu1(String name, String id, int grade) {
        this.name = name;
        this.id = id;
        this.grade = grade;
    }

    public Stu1() {
    }
}

public class Main {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        Stu1 maxStu = new Stu1(null, null, -1);
        Stu1 minStu = new Stu1(null, null, 101);
        Stu1 temp;
        int N = in.nextInt();
        for (int i = 0; i < N; i++) {
            temp = new Stu1(in.next(), in.next(), in.nextInt());
            if(temp.grade > maxStu.grade) {
                maxStu = temp;
            }
            if (temp.grade < minStu.grade) {
                minStu = temp;
            }
        }
        in.close();
        System.out.println(maxStu.name + " " + maxStu.id);
        System.out.println(minStu.name + " " + minStu.id);
    }

}
