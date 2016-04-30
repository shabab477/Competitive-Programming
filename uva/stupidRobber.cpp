#include <iostream>
#include <stdio.h>
#include <math.h>
#include <algorithm>
using namespace std;

int main() {
	
	int n = 0;
	
	scanf("%d", &n);
	
	for(int c = 0; c < n; c++)
	{
		int row = 0;
		int col = 0;
		
		scanf("%d %d", &col, &row);
		
		int array[row + 1][col + 1];
		
		for(int i = 0; i < col + 1; i++)
		{
			array[0][i] = 0;
		}
		
		for(int j = 0; j < row + 1; j++)
		{
			array[j][0] = 0;
		}
		
		int value[row + 1];
		int weight[row + 1];
		
		for(int i = 1; i < (row + 1); i++)
		{
			scanf("%d %d", &weight[i], &value[i]);
		}
		
		for(int i = 1; i < row + 1; i++)
		{
			for(int j = 1; j < col + 1; j++)
			{
				if(j >= weight[i])
				{
					array[i][j] = max(value[i] + array[i - 1][j - weight[i]], array[i - 1][j]);
				}
				else
				{
					array[i][j] = array[i - 1][j];
				}
			}
		}
		
		printf("Hey stupid robber, you can get %d.\n", array[row][col]);
		
	}
	
	return 0;
}