#include <iostream>
using namespace std;
#include <string.h>
#include <math.h>
#include <stdio.h>

char array[101][101];
char input[10001];

int findDot(string s)
{
	
	for(int c = 0; c < s.length(); c++)
	{
		if(s.at(c) == '.')
		{
			return c;
		}
	}
	return -1;
}


bool isWhole(double d)
{
	string s = to_string(d);
	
	int k = findDot(s);
	
	for(int c = k + 1; c < s.length(); c++)
	{
		if(s.at(c) != '0')
		{
			return false;
		}
	}
	return true;
}



int main() {
	
	int n = 0;
	
	scanf("%d", &n);
	cin.ignore();
	
	for(int c = 0; c < n; c++)
	{
		
		
		cin.getline(input, sizeof(input));
		string s = "";
		int l = 0;
		
		
		double d = sqrt(strlen(input));
		
		bool flag = isWhole(d);
		
		if(flag)
		{
			int i = - 1;
			int col = 0;
			int mod = (int)d;
			for(int k = 0; k < strlen(input); k++)
			{
				if(k % mod == 0)
				{
					i++;
					col = 0;
				}
				array[i][col] = input[k];
				col++;
			}
			
			int row = -1;
			col = -1;
			for(int q = 0; q < strlen(input); q++)
			{
				if(q % mod == 0)
				{
					row = 0;
					col ++;
				}
				printf("%c", array[row][col]);
				row++;
			}
			printf("\n");
		}
		else
		{
			printf("INVALID\n");
		}
		
		
	}
	return 0;
}