#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	
	int n1 = 0;
	int n2 = 0;
	int n3 = 0;
	
	scanf("%d", &n1);
	scanf("%d", &n2);
	scanf("%d", &n3);
	
	char sym1 = '+';
	char sym2 = '*';
	int max = 0;
	
	for(int c = 0; c <= 3; c++)
	{
		if(c == 0)
		{
			sym1 = '+';
			sym2 = '+';
		}
		if(c == 1)
		{
			sym1 = '+';
			sym2 = '*';
		}
		if(c == 2)
		{
			sym1 = '*';
			sym2 = '*';
		}
		if(c == 3)
		{
			sym1 = '*';
			sym2 = '+';
		}
		for(int i = 0; i < 2; i++)
		{	
			int sum = 0;
			
			if(i % 2 == 0)
			{
				if(sym1 == '+')
				{
					sum = (n1 + n2);
				}
				else
				{
					sum = (n1 * n2);
				}
				
				if(sym2 == '+')
				{
					sum  = sum + n3;
				}
				else
				{
					sum = sum * n3;
				}
			}
			else
			{
				if(sym2 == '+')
				{
					sum = (n2 + n3);
				}
				else
				{
					sum = (n2 * n3);
				}
				
				if(sym1 == '+')
				{
					sum = sum + n1;
				}
				else
				{
					sum = sum * n1;
				}
			}
			
			if(sum > max)
			{
				max = sum;
			}
		}
	}
	
	printf("%d\n", max);
	return 0;
}