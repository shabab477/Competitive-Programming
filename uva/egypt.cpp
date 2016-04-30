#include <iostream>
#include <stdio.h>
#include <string.h>

using namespace std;

char input[550];
int values[550];

int myValue(char ch)
{
	switch(ch)
	{
		case 'B':
			return 1;
			break;
		case 'U':
			return 10;
			break;
		case 'S':
			return 100;
			break;
		case 'P':
			return 1000;
			break;
		case 'F':
			return 10000;
			break;
		case 'T':
			return 100000;
			break;
		default:
			return 1000000;
			break;
			
	}
}
int main() {
	int n = 0;
	scanf("%d", &n);
	
	for(int c = 0; c < n; c++)
	{
		scanf("%s", &input);
		
		for(int i = 0; i < strlen(input); i++)
		{
			values[i] = myValue(input[i]);
		}
		
		int def = values[0];
		
		int i = 0;
		int count = 0;
		while(values[i] == def && i < strlen(input))
		{
			count += values[i];
			i++;
		}
		
		if(i < 10)
		{
		bool ascending = false;
		
		if(values[i] > def)
		{
			ascending = true;
		}
		
		if(ascending)
		{
			bool flag = false;
			int repeat = values[i];
			int num = 0;
			
			while(i < strlen(input) )
			{
				if(values[i] >= values[i - 1])
				{
					count += values[i];
					
				}
				else
				{
					flag = true;
					break;
				}
				
				if(repeat == values[i])
				{
					num++;
					
				}
				else
				{
					repeat = values[i];
					num = 1;
				}
				
				
				if(num > 9)
				{
					flag = true;
					
					break;
				}
				i++;
			}
			
			if(flag)
			{
				printf("error\n");
			}
			else
			{
				printf("%d\n", count);
				
			}
		}
		else
		{
			bool flag = false;
			int repeat = values[i];
			int num = 0;
			while(i < strlen(input))
			{
				if(values[i] <= values[i - 1])
				{
					
					count += values[i];
				}
				else
				{
					flag = true;
					break;
				}
				
				if(repeat == values[i])
				{
					num++;
				}
				else
				{
					repeat = values[i];
					num = 1;
				}
				
				if(num > 9)
				{
					flag = true;
					break;
				}
				i++;
			}
			
			if(flag)
			{
				printf("error\n");
			}
			else
			{
				printf("%d\n", count);
			}
		}
		}
		else
		{
			printf("error\n");
		}
	}
	return 0;
}