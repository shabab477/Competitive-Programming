/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
public class Main
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		String answer = "";
		
		int count = 0;
		while(sc.hasNext())
		{
			String s = sc.nextLine();
			int len = s.length();
			for(int c = 0; c < len; c++)
			{
				if(s.charAt(c) == '\"')
				{
					if(count % 2 == 0)
					{
						answer += "``";
					}
					else
					{
						answer += "\'\'";
					}
					count++;
				}
				else
				{
					answer += s.charAt(c);
				}
			}
			
			answer += "\n";
		}
		
		System.out.print(answer);
	}
}