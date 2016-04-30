
import java.util.Arrays;
import java.util.Comparator;
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
public class Main {
    
    class Teams
    {
        String name;
        int points;
        int played;        
        int win;
        int lost;
        int draw;
        int gd;
        int scored;
        int against;
        
        public String toString()
        {
            String s = name + " " + points + "p, " + played + "g (" +  win + "-" + draw + "-" + lost + "), " + gd + "gd (" +
                    scored + "-" + against + ")";
            return s;
        }
    }
    
    public void findAndUpdate(Teams[] array, String n, int sc, int ag)
    {
        for(int c = 0; c < array.length; c++)
        {
            //System.out.println(array[c]);
            if(array[c].name.equalsIgnoreCase(n))
            {
                array[c].scored += sc;
                array[c].against += ag;
                array[c].gd += (sc - ag);
                array[c].played++;
                if(sc == ag)
                {
                    array[c].draw++;
                    array[c].points += 1;
                }
                else if(sc > ag)
                {
                    array[c].win++;
                    array[c].points += 3;
                }
                else
                {
                    array[c].lost++;
                }
            }
        }
    }
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        sc.nextLine();
        for(int c = 0; c < n; c++)
        {
            String s = sc.nextLine();
            System.out.println(s);
            
            int k = sc.nextInt();
            sc.nextLine();
            
            Main m = new Main();
            Teams[] array = new Teams[k];
            
            for(int i = 0; i < k; i++)
            {
                array[i] = m.new Teams();
                
                 
                array[i].name = sc.nextLine();
                //System.out.println(array[c].name);
            }
            
            k = sc.nextInt();
            sc.nextLine();
            
            for(int i = 0; i < k; i++)
            {
                s = sc.nextLine();
                
                String[] result = s.split("#");
                int left = Integer.parseInt(result[1].split("@")[0]);
                int right = Integer.parseInt(result[1].split("@")[1]);
               
                m.findAndUpdate(array, result[0], left, right);
                m.findAndUpdate(array, result[2], right, left);
            }
            
            Arrays.sort(array, new Comparator<Teams>(){

                
                public int compare(Teams o1, Teams o2) {
                    
                    if(o1.points > o2.points)
                    {
                        return -1;
                    }
                    else if(o1.points < o2.points)
                    {
                        return 1;
                    }
                    else
                    {
                        if(o1.win > o2.win)
                        {
                            return -1;
                        }
                        else if(o1.win < o2.win)
                        {
                            return 1;
                        }
                        else
                        {
                            if(o1.gd > o2.gd)
                            {
                                return -1;
                            }
                            else if(o1.gd < o2.gd)
                            {
                                return 1;
                            }
                            else
                            {
                                if(o1.scored > o2.scored)
                                {
                                    return -1;
                                }
                                else if(o1.scored < o2.scored)
                                {
                                    return 1;
                                }
                                else
                                {
                                    if(o1.played < o2.played)
                                    {
                                        return -1;
                                    }
                                    else if(o1.played > o2.played)
                                    {
                                        return 1;
                                    }
                                    else
                                    {
                                        return o1.name.compareToIgnoreCase(o2.name);
                                    }
                                }
                            }
                        }
                    }
                    
                }
                
            });
            
            for(int i = 0; i < array.length; i++)
            {
                System.out.println((i + 1) + ") " + array[i].toString());
            }
            if(c != n -1)
                System.out.println();
        }
    }
       
    
    
}
