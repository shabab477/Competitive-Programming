#include <iostream>
using namespace std;
#include <stdio.h>
#include <string.h>

string decToBin(int n)
{
	string s = "";
	
	while(n != 0)
	{
		s += to_string((n % 2));
		n = n / 2;
	}
	
	string k = "";
	
	for(int c = s.length() - 1; c >= 0; c--)
	{
		k += s.at(c);
	}
	return k;
}

string hexToBin(char ch)
{
	switch(ch)
	{
		case '0':
		return "0000";
		case '1':
		return "0001";
		case '2':
		return "0010";
		case '3':
		return "0011";
		case '4':
		return "0100";
		case '5':
		return "0101";
		case '6':
		return "0110";
		case '7':
		return "0111";
		case '8':
		return "1000";
		default:
		return "1001";
	}
}

int main() {
	
	int n = 0;
	scanf("%d", &n);
	
	for(int c = 0; c < n; c++)
	{
		int num = 0;
		scanf("%d", &num);
		string decB = decToBin(num);
		int b1 = 0;
		
		for(int i = 0; i < decB.length(); i++)
		{
			if(decB.at(i) == '1')
			{
				b1++;
			}
		}
		
		string hexB = "";
		string hexNum = to_string(num);
		
		for(int i = 0; i < hexNum.length(); i++)
		{
			hexB += hexToBin(hexNum.at(i));
		}
		
		int b2 = 0;
		
		for(int i = 0; i < hexB.length(); i++)
		{
			if(hexB.at(i) == '1')
			{
				b2++;
			}
		}
		
		printf("%d %d\n", b1, b2);
	}
	
	return 0;
}