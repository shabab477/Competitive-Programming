import java.util.*;

public class Main
{
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        
        String s1 = "0";
        s1 += s1 + sc.next();
        String s2 = "0";
        for(int c = s1.length() - 1; c >= 0; c--)
        {
            s2 += s1.charAt(c);
        }
        
        int array[][] = new int[2][50001];
        //System.out.println(s2);
        for(int c = 1; c < s1.length(); c++)
        {
            for(int i = 1; i < s2.length(); i++)
            {
                if(s1.charAt(c) == s2.charAt(i))
                {
                    array[c % 2][i] = array[Math.abs((c % 2) - 1)][i - 1] + 1;
                }
                else
                {
                    
                    array[c % 2][i] = Math.max(array[Math.abs((c % 2) - 1)][i], array[c % 2][i - 1]);
                }
            }
        }
        
        System.out.println(s2.length());
        for(int c = 0; c < 2; c++)
        {
            for(int i = 0; i < s2.length(); i++)
            {
                System.out.print(array[c][i] + " ");
            }
            System.out.println();
        }
        int max = Math.max(array[0][s1.length()], array[1][s2.length()]);
        System.out.println(n - max);
        
    }
}