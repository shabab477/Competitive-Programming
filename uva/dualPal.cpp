#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
#include <math.h>
using namespace std;

string base(string s, long long int num, int b)
{
	if(num / b == 0)
	{
		int rem = num % b;
		if(rem > 9)
		{
			if(rem == 10)
			{
				s += "A";
			}
			else if(rem == 11)
			{
				s += "B";
			}
			else if(rem == 12)
			{
				s += "C";
			}
			else if(rem == 13)
			{
				s += "D";
			}
			else if(rem == 14)
			{
				s += "E";
			}
			else if(rem == 15)
			{
				s += "F";
			}
		}
		else 
		{
			s += to_string(rem);
		}
		return s;
	}
	else
	{
		int rem = num % b;
		if(rem > 9)
		{
			if(rem == 10)
			{
				s += "A";
			}
			else if(rem == 11)
			{
				s += "B";
			}
			else if(rem == 12)
			{
				s += "C";
			}
			else if(rem == 13)
			{
				s += "D";
			}
			else if(rem == 14)
			{
				s += "E";
			}
			else if(rem == 15)
			{
				s += "F";
			}
		}
		else 
		{
			s += to_string(rem);
		}
		return base(s, num / b, b);
	}
	
}

int main() {
	
	int n = 0;
	scanf("%d", &n);
	
	long long int limit = pow(2, 60);
	
	for(int c = 0; c < n; c++)
	{
		printf("1");
		int count = 0;
		int b1 = 0;
		int b2 = 0;
		
		scanf("%d %d", &b1, &b2);
		for(long long int i = 2; i < limit; i++)
		{
			string dummy = "";
			string s1 = base(dummy, i, b1);
			dummy = "";
			string s2 = base(dummy, i, b2);
			
			bool flag1 = true;
			bool flag2 = true;
			int len1 = s1.length();
			int len2 = s2.length();
			for(int j = 0, k = len1 - 1; j < len1 / 2; j++, k--)
			{
				if(s1.at(j) != s1.at(k))
				{
					flag1 = false;
					break;
				}
			}
			
			if(flag1)
			{
				for(int j = 0, k = len2 - 1; j < len2 / 2; j++, k--)
				{
					if(s2.at(j) != s2.at(k))
					{
						flag2 = false;
						break;
					}
				}
				
			}
			
			if(flag1 && flag2)
			{
				printf(" %lld", i);
				count++;
			}
			if(count > 1000)
			{
				break;
			}
		}
		
		printf("\n");
	}
	return 0;
}