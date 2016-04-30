#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	
	int n = 0;
	scanf("%d", &n);
	
	while(n != 0)
	{
		int divR = 0;
		int divC = 0;
		
		scanf("%d %d", &divR, &divC);
		
		for(int count = 0; count < n; count++)
		{
			int r = 0;
			int c = 0;
			
			scanf("%d %d", &r, &c);
			
			if(r == divR || c == divC)
			{
				printf("divisa\n");
			}
			else if(r < divR)
			{
				
				if(c > divC)
				{
					printf("NO\n");
				}
				else
				{
					printf("SO\n");
				}
			}
			else
			{
				
				if(c > divC)
				{
					printf("NE\n");
				}
				else
				{
					printf("SE\n");
				}
			}
		}
		scanf("%d", &n);
	}
	return 0;
}