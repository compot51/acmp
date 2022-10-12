import java.util.Scanner;
 
public class Main
{
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        int mx = -101, cnt = 1;
        int n;
        do {
            n = in.nextInt ();
            if (mx == n)
                cnt ++;
            if (mx < n) {
                cnt = 1;
                mx = n;
            }
        }
        while (n != 0);
        System.out.println (cnt);
    }
}
