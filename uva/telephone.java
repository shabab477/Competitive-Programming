/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Ideone
{
	public static void main (String[] args) throws java.lang.Exception
	{
		Scanner sc = new Scanner(System.in);
		HashMap<Character, Integer> map = new HashMap<>();
		
		map.put('A', 2);
		map.put('B', 2);
		map.put('C', 2);
		
		map.put('D', 3);
		map.put('E', 3);
		map.put('F', 3);
		
		map.put('G', 4);
		map.put('H', 4);
		map.put('I', 4);
		
		map.put('J', 5);
		map.put('K', 5);
		map.put('L', 5);
		
		map.put('M', 6);
		map.put('N', 6);
		map.put('O', 6);
		
		map.put('P', 7);
		map.put('Q', 7);
		map.put('R', 7);
		map.put('S', 7);
		
		
		map.put('T', 8);
		map.put('U', 8);
		map.put('V', 8);
		
		map.put('W', 9);
		map.put('X', 9);
		map.put('Y', 9);
		map.put('Z', 9);
		
		while(sc.hasNext())
		{
			String s = sc.next();
			s = s.toUpperCase();
			String answer = "";
			int len = s.length();
			
			for(int c = 0; c < len; c++)
			{
				if(s.charAt(c) == '1' || s.charAt(c) == '0')
				{
					answer += s.charAt(c);
				}
				else if(s.charAt(c) == '-')
				{
					answer += '-';
				}
				else
				{
					answer += map.get(s.charAt(c));
				}
			}
			
			System.out.println(answer);
		}
	}
}