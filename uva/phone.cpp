#include <iostream>
#include <string.h>
using namespace std;
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

char encode[300];
char number[300];
char answer[300];

int parseInt(string str)
{
	int sum = 0;
	int count = 0;
	for(int c = str.length() - 1; c >= 0; c--)
	{
		sum += (pow(10, count) * (str.at(c) - 48));
		count++;
	}
	return sum;
}

bool isDigit(char c)
{
	int i = (int)c;
	
	if(i >= 48 && i <= 57)
	{
		return true;
	}
	return false;
}


bool isCharacter(char c)
{
	return !(isDigit(c));
}

int main() {
	int n = 0;
	scanf("%d", &n);
	
	
	for(int j = 1; j <= n; j++)
	{
		scanf("%s", &encode);
		char ch;
		int count = 0;
		string sum = "";
		int an = 0;
		string s = "";
		int size = 0;
		for(int c = 0; c < strlen(encode); c++)
		{
			if(isCharacter(encode[c]))
			{
				int t = parseInt(sum);
				for(int loop = 0; loop < t; loop++)
				{
					s += ch;
				}
				ch = encode[c];
				sum = "";
			}
			else
			{
				sum += encode[c];
			}
		}
		
		int t = parseInt(sum);
		for(int loop = 0; loop < t; loop++)
		{
			s += ch;
			size++;
		}
		
		printf("Case %d: %s\n", j, s.c_str());
	}
	
	return 0;
}