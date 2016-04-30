/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;


/* Name of the class has to be "Main" only if the class is public. */
public class Ideone
{
	static String array1[];
	static String array2[];
	
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		
		int n = sc.nextInt();
		
		for(int c = 0; c < n; c++)
		{
			String s1 = sc.next();
			String s2 = sc.next();
			
			array1 = s1.split("\\.+");
			array2 = s2.split("\\.+");
			//System.out.println(array1.length);
			boolean flag = true;
			for(int i = 0; i < 4; i++)
			{
				int sum = 0;
				int k = 0;
				for(int j = array2[i].length() - 1; j >= 0; j--)
				{
					sum += Integer.parseInt(array2[i].charAt(j) + "") * Math.pow(2, k);
					k++;
				}
				                        System.out.println(sum);
				if(sum != Integer.parseInt(array1[i]))
				{
					flag = false;
					break;
				}
			}
			
			if(flag)
			{
				System.out.println("Yes");
			}
			else
			{
				System.out.println("No");
			}
		}
	}
}