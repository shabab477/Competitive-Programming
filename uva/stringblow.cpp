#include <iostream>
#include <string.h>
using namespace std;
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

char encode[300];
char number[300];
char answer[300];

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
		int sum = 0;
		int an = 0;
		string s;
		int size = 0;
		for(int c = 0; c < strlen(encode); c++)
		{
			if(isCharacter(encode[c]))
			{
				
				for(int loop = 0; loop < sum; loop++)
				{
					answer[size] = ch;
					size++;
				}
				ch = encode[c];
				count = 0;
				sum = 0;
			}
			else
			{
				sum += pow(10, count) - 1 + ((int)encode[c] - 48);
				count++;
			}
		}
		for(int loop = 0; loop < sum; loop++)
		{
			answer[size] = ch;
			size++;
		}
		
		printf("Case %d: %s\n", j, answer);
	}
	
	return 0;
}