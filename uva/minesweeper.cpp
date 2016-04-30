#include <iostream>
#include <string.h>
#include <cstring>
#include <string>
using namespace std;

string line;
int main() {
	
	int n, m = 0;
	
	int tc = 1;
	
	while(scanf("%d %d", &n, &m), n || m)
	{
		if(tc > 1)
		{
			printf("\n");
		}
		
		char array[n][m];
		int temp[n][m];
		getline(cin, line);
		
		for(int c = 0; c < n; c++)
		{
			getline(cin, line);
			
			for(int i = 0; i < m; i++)
			{
				array[c][i] = line[i];
			}
		}
		
		for(int c = 0; c < n; c++)
		{
			for(int i = 0; i < m; i++)
			{
				if(array[c][i] == '*')
				{
					temp[c][i] = -1;	
				}
				else
				{
					int sum = 0;
					
					if(i - 1 >= 0 && array[c][i - 1] == '*')
					{
						sum++;
						
					}
					
					if(i + 1 < m && array[c][i + 1] == '*')
					{
						sum++;
						
					}
					
					if(c + 1 < n && array[c + 1][i] == '*')
					{
						sum++;
						
					}
					
					if(c - 1 >= 0 && array[c - 1][i] == '*')
					{
						sum++;
						
					}
					
					if(c - 1 >= 0 && i - 1 >= 0 && array[c - 1][i - 1] == '*')
					{
						sum++;
						
					}
					
					if(c - 1 >= 0 && i + 1 < m && array[c - 1][i + 1] == '*')
					{
						sum++;
						
					}
					
					if(c + 1 < n && i - 1 >= 0 && array[c + 1][i - 1] == '*')
					{
						sum++;
						
					}
					
					if(c + 1 < n && i + 1 < m && array[c + 1][i + 1] == '*')
					{
						sum++;
						
					}
					temp[c][i] = sum;
				}
			}
		}
		
		printf("Field #%d:\n", tc);
		for(int c = 0; c < n; c++)
		{
			for(int i = 0; i < m; i++)
			{
				if(temp[c][i] == -1)
				{
					printf("*");
				}
				else
				{
					printf("%d", temp[c][i]);
				}
			}
			printf("\n");
		}
		
		tc++;
		
		
	}
	return 0;
}
