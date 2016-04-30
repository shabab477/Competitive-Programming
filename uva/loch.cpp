#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
	
	
	
	int n = 0;
	scanf("%d", &n);
	
	for(int c = 0; c < n; c++)
	{
		int row = 0;
		int col = 0;
		
		scanf("%d %d", &row, &col);
		
		int array[row][col];
		int count = 0;
		for(int c = 2; c < row; c += 3)
		{
			for(int i = 2; i < col; i += 3)
			{
				count++;
				//printf("%d %d\n", c, i);
			}
			
		}
		
		printf("%d\n", count);
	}
	
	
	
	return 0;
}