#include <iostream>
using namespace std;
#include <string.h>


char answer[30];

void print(string s, int n)
{
	for(int c = 0; c < n; c++)
	{
		printf(" ");
	}
	printf("%s", s.c_str());
}

int encode(char ch)
{
	if(ch == 'B' || ch == 'P' || ch == 'F' || ch == 'V')
	{
		return 1;
	}
	else if(ch == 'D' || ch == 'T')
	{
		return 3;
	}
	else if(ch == 'L')
	{
		return 4;
	}
	else if(ch == 'M' || ch == 'N')
	{
		return 5;
	}
	else if(ch == 'R')
	{
		return 6;
	}
	else
	{
		return 2;
	}

}

int main() {
	
	print("NAME", 9);
	string s = "Name";
	print("SOUNDEX CODE", 34 - (s.length() + 9));
	
	while(scanf("%s", &answer) != EOF)
	{
		s = "";
		
		s += answer[0];
		
		for(int c = 1; c < strlen(answer); c++)
		{
			if(answer[c] != 'A' && answer[c] != 'E' && answer[c] != 'I' && answer[c] != 'O' && 
			answer[c] != 'U' && answer[c] != 'Y' && answer[c] != 'W' && answer[c] != 'H' && 
			encode(answer[c - 1] != encode(answer[c])))
			{
				s += encode(answer[c]);
			}
		}
		
		if(s.length() < 4)
		{
			while(s.length() != 4)
			{
				s += '0';
			}
		}
		else
		{
			string k = "";
			int c = 0;
			while(k.length() != 4)
			{
				k += s.at(c);
				c++;
			}
			s = k;
		}
		
		string temp = "";
		for(int j = 0; j < strlen(answer); j++)
		{
			temp += answer[j];
		}
		print(temp, 9);
		print(s, 34 - (temp.length() - 9));
	}
	
	return 0;
}