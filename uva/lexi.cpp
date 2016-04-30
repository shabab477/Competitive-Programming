#include <iostream>
using namespace std;
#include <string.h>
#include <stdio.h>

bool checker(string s, string prefix)
{
	if(s.length() < prefix.length())
	{
		return false;
	}
	
	for(int c = 0; c < prefix.length(); c++)
	{
		if(prefix.at(c) != s.at(c))
		{
			return false;
		}
	}
	
	return true;
}


int main() {
	
	int n = 0;
	string in = "";
	string high = "";
	string s = "";
	getline(cin, in);
	
	scanf("%d", &n);
	getline(cin, high);
	high = in;
	int c = 0;
	
	while(c < n)
	{
		getline(cin, s);
		if(checker(s, in))
		{
			high = s;
			break;
		}
		c++;
	}
	
	while(c < n)
	{
		getline(cin, s);
		
		if(checker(s, in))
		{
			int findX = high.length();
			int findY = s.length();
			int start = in.length();
			bool flag = true;
			
			while(start < findX && start < findY)
			{
				if(high.at(start) != high.at(start))
				{
					if(high.at(start) < s.at(start))
					{
						high = high;
						flag = false;
					}
					else
					{
						high = s;
						flag = false;
					}
					break;
				}
				start++;
			}
			
			if(flag)
			{
				if(high.length() < s.length())
				{
					high = high;
				}
				else
				{
					high = s;
				}
			}
		}
		c++;
	}
	
	printf("%s\n", high.c_str());
	
	return 0;
}