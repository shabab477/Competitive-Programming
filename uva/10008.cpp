#include <iostream>
using namespace std;
#include <string.h>
#include <algorithm>
#include <stdio.h>

struct Alpha
{
	char alpha;
	int count;
	
	
	
}

bool isCharacter(char ch)
{
	int d = (int)ch;
	if((d >= 65 && d <= 90) || (d >= 97 && d <= 122))
	{
		return true;
	}
	return false;
}

bool isLower(char ch)
{
	int d = (int)ch;
	if(d >= 97 && d <= 122)
	{
		return true;
	}
	return false;
}




int main() {
	
	int n = 0;
	Alpha array[26];
	scanf("%d", &n);
	
	for(int c = 0; c < 26; c++)
	{
		array[c].alpha = (char)(65 + c);
		array[c].count = 0;
	}
	string s = "";
	getline(cin, s);
	
	for(int c = 0; c < n; c++)
	{
		s = "";
		getline(cin, s);
		//printf("%s", s.c_str());
		for(int i = 0; i < s.length(); i++)
		{
			int d = 0;
			if(isCharacter(s.at(i)))
			{
				
				if(isLower(s.at(i)))
				{
					d = ((int)s.at(i)) - 65 - 32;
				}
				else
				{
					d = (int)s.at(i) - 65;
				}
				
				array[d].count = array[d].count + 1;
				
			}
		}
		
		
	}
	sort(array, array + 26, [](Alpha x, Alpha y){
		if(x.count == y.count)
		{
			int d1 = (int)x.alpha;
			int d2 = (int)y.alpha;
			return d1 < d2;
		}
		else
		{
			return x.count > y.count;
		}
		
	});
	
		for(int c = 0; c < 26; c++)
		{	
			if(array[c].count == 0)
			{
				break;
			}
			printf("%c %d\n", array[c].alpha, array[c].count);
		}
	return 0;
}