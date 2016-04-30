
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author Shabab
 */
public class Set {

    static int array[] = new int[100000000];
    
    public static void union(int root1, int root2)
    {
        //System.out.println(root1);
        //System.out.println(root2);
        if(array[root1] < array[root2])
        {
            array[root2] += array[root1];
            array[root1] = root2;
        }
        else
        {
            array[root1] += array[root2];
            array[root2] = root1;
        }
    }
    
    
    static int find(int index)
    {
        if(array[index] < 0)
        {
            return index;
        }
        else
        {
            //System.out.println(index);
            array[index] = find(array[index]);
            return array[index];
            
        }
    }
    
    
    static void clear(int n)
    {
        for(int c = 0; c <= n; c++)
        {
            array[c] = -1;
        }
    }
    
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int tc = sc.nextInt();
        int count = 0;
        while((tc--) > 0)
        {
            String s = "";
            int n = sc.nextInt();
            int  bad = 0;
            int good = 0;
            if(count > 0)
            {
                System.out.println();
            }
            count++;
            clear(n);
            sc.nextLine();
            while(true)
            {
                s = sc.nextLine();
                String val[] = s.split("\\s+");
                
                if(s.length() == 0)
                {
                    break;
                }
                
                if(s.charAt(0) == 'c')
                {
                    // because input might be self connecting
                    if(Integer.parseInt(val[1]) != Integer.parseInt(val[2]))
                    {
                        union(find(Integer.parseInt(val[1])), find(Integer.parseInt(val[2])));
                    }
                }
                else
                {
                    
                    int r1 = find(Integer.parseInt(val[1]));
                    int r2 = find(Integer.parseInt(val[2]));
                    
                    if(r1 == r2)
                    {
                        good++;
                    }
                    else
                    {
                        bad++;
                    }
                    
                }
            }
            
            System.out.printf("%d,%d\n", good, bad);
            //System.out.println(bad);
        }
    }
    
}


