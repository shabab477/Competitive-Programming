
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
public class LeapYear {
    static int month1 = 0;
    static int month2 = 0;
    static String s1;
    static String s2;
    
    static void findMonth(String s, int n)
    {
        switch(s)
        {
            case "January":
                if(n == 1)
                {
                    month1 = 1;
                    
                }
                else
                {
                    month2 = 1;
                }
            break;
            case "February":
                if(n == 1)
                {
                    month1 = 2;
                }
                else
                {
                    month2 = 2;
                }
            break;
            case "March":
                if(n == 1)
                {
                    month1 = 3;
                }
                else
                {
                    month2 = 3;
                }
            break;
            case "April":
                if(n == 1)
                {
                    month1 = 4;
                }
                else
                {
                    month2 = 4;
                }
            break;
            case "May":
                if(n == 1)
                {
                    month1 = 5;
                }
                else
                {
                    month2 = 5;
                }
            break;
            case "June":
                if(n == 1)
                {
                    month1 = 6;
                }
                else
                {
                    month2 = 6;
                }
            break;
            case "July":
                if(n == 1)
                {
                    month1 = 7;
                }
                else
                {
                    month2 = 7;
                }
            break;
            case "August":
                if(n == 1)
                {
                    month1 = 8;
                }
                else
                {
                    month2 = 8;
                }
            break;
            case "September":
                if(n == 1)
                {
                    month1 = 9;
                }
                else
                {
                    month2 = 9;
                }
            break;
            case "October":
                if(n == 1)
                {
                    month1 = 10;
                }
                else
                {
                    month2 = 10;
                }
            break;
            case "November":
                if(n == 1)
                {
                    month1 = 11;
                }
                else
                {
                    month2 = 11;
                }
            break;
            case "December":
                if(n == 1)
                {
                    month1 = 12;
                }
                else
                {
                    month2 = 12;
                }
            break;
                
                    
        }
                
    }
    
    public static void main(String[] args) {
        
        Scanner sc = new Scanner(System.in);
        
        int n = sc.nextInt();
        sc.nextLine();
        for(int c = 1; c <= n; c++)
        {
            s1 = sc.nextLine();
            s2 = sc.nextLine();
            
            String[] array1 = s1.split("\\s+");
            String[] array2 = s2.split("\\s+");
            
            findMonth(array1[0], 1);
            findMonth(array2[0], 2);
            
            int date1 = Integer.parseInt(array1[1].split("\\,")[0]);
            int date2 = Integer.parseInt(array2[1].split("\\,")[0]);
            
            int year1 = Integer.parseInt(array1[2]);
            int year2 = Integer.parseInt(array2[2]);
            
            boolean flag = false;
            
            
            if(year1 == year2)
            {
                if(year1 % 4 == 0)
                {   
                    //System.out.printf("Here d1: %d %d %d\n", date1, month1, year1);
                   // System.out.printf("Here d2: %d %d %d\n", date2, month2, year2);
                    if(year1 % 100 == 0)
                    {
                        
                        if(year1 % 400 == 0)
                        {
                            if(month1 < 2 && month2 > 2)
                            {
                                System.out.println("Case " + c + ": 1");
                                flag = true;
                        
                            }
                            else if((month1 == 2 && date1 <= 29) &&(month2 > 2))
                            {
                                flag = true;
                                 System.out.println("Case " + c + ": 1");
                            }
                            else if((month1 < 2) && (month2 == 2 && date2 <= 29))
                            {
                                flag = true;
                               System.out.println("Case " + c + ": 1"); 
                            }
                            else if((month1 == 2 && date1 <= 29) && (month2 == 2 && date2 >= 29))
                            {
                                flag = true;
                                System.out.println("Case " + c + ": 1");
                            }
                        }
                    }
                    else if(month1 < 2 && month2 > 2)
                    {
                        System.out.println("Case " + c + ": 1");
                        flag = true;
                        
                    }
                    else if((month1 == 2 && date1 <= 29) &&(month2 > 2))
                    {
                        flag = true;
                        System.out.println("Case " + c + ": 1");
                    }
                    else if((month1 < 2) && (month2 == 2 && date2 <= 29))
                    {
                        flag = true;
                       System.out.println("Case " + c + ": 1"); 
                    }
                    else if((month1 == 2 && date1 <= 29) && (month2 == 2 && date2 >= 29))
                    {
                        flag = true;
                        System.out.println("Case " + c + ": 1");
                    }
                }
                
            }
            else
            {
                int count = 0;
                if(year1 % 4 == 0)
                {
                    if(year1 % 100 == 0)
                    {
                        if(year1 % 400 == 0)
                        {
                            if((month1 <= 2 && date1 <= 29))
                            {
                                count++;
                                flag = true;
                            }
                        }
                    }
                    else if((month1 <= 2 && date1 <= 29))
                    {
                        count++;
                        flag = true;
                        
                    }
                }
                int i = 0;
                if(flag)
                {
                    i = year1 + 4;
                }
                else
                {
                    i = year1 + 1;
                }
                for(; i < year2;)
                {
                    //System.out.println("here");
                    if(i % 4 == 0)
                    {
                        if(i % 100 == 0)
                        {
                            if(i % 400 == 0)
                            {
                                flag = true;
                                count++;
                            }
                        }
                        else
                        {
                            flag = true;
                            count++;
                        }
                    }
                    if(flag)
                    {
                        i += 4;
                    }
                    else
                    {
                        i++;
                    }
                }
                
                if(year2 % 4 == 0)
                {
                    if(year2 % 100 == 0)
                    {
                        if(year2 % 400 == 0)
                        {
                            if((month2 > 2))
                            {
                                count++;
                                
                            }
                            else if(month2 == 2 && date2 >= 29)
                            {
                                count++;
                            }
                        }
                    }
                    else if((month2 > 2))
                            {
                                count++;
                                
                            }
                   else if(month2 == 2 && date2 >= 29)
                            {
                                count++;
                            }
                }
                System.out.println("Case " + c + ": " + count);
            }
            
        }
                
        
    }
    
}

