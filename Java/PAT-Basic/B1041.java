import java.util.Scanner;

class Stu {
    String id;
    int sj, ks;

    public Stu(String id, int sj, int ks) {
        this.id = id;
        this.sj = sj;
        this.ks = ks;
    }

    public Stu() {}

    public String getId() {
        return id;
    }

    public void setId(String id) {
        this.id = id;
    }

    public int getSj() {
        return sj;
    }

    public void setSj(int sj) {
        this.sj = sj;
    }

    public int getKs() {
        return ks;
    }

    public void setKs(int ks) {
        this.ks = ks;
    }
}

public class Main {
    static int maxn = 1010;
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int N, M, sjNum;
        Stu[] all = new Stu[maxn];
        Stu temp = new Stu();
        N = in.nextInt();
        for(int i = 0; i < N; i++) {
            temp.setId(in.next());
            temp.setSj(in.nextInt());
            temp.setKs(in.nextInt());
            all[temp.getSj()] = new Stu(temp.getId(), temp.getSj(), temp.getKs());
        }
        M = in.nextInt();
        int[] a = new int[M];
        for(int i = 0; i < M; i++) {
            sjNum = in.nextInt();
            System.out.printf("%s %d\n", all[sjNum].getId(), all[sjNum].getKs());
        }
    }

}