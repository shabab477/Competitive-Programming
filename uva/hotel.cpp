#include <iostream>
#include <stdio.h>
using namespace std;



int main() {
	
	int n = 0;
	scanf("%d", &n);
	
	for(int c = 0; c < n; c++)
	{
		int g = 0;
		scanf("%d", &g);
		int arrival[g];
		
		
		
		for(int i = 0; i < g; i++)
		{
			
			scanf("%d", &arrival[i]);
			
		}
		
		int dep[g];
		
		for(int i = 0; i < g; i++)
		{
			scanf("%d", &dep[i]);
		}
		
		
		int max = -1;
		for(int i = 0; i < g; i++)
		{
			int count = 1;
		
			for(int j = 0; j < g; j++)
			{
				if(j != i)
				{
					
					if(arrival[j] <= arrival[i])
					{
						if(dep[j] > arrival[i])
						{
							count++;
						}
					}
				}
			}
			
		
			
			if(count > max)
			{
				max = count;
			}
		}
		
		printf("%d\n", max);
	}
	return 0;
}