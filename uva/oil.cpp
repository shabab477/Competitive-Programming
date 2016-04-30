#include <iostream>
#include <string.h>
#include <string>
using namespace std;

char array[101][101];
int flag[101][101];
int count = 0;

void clearArrays(int row, int col)
{
	for(int c = 0; c < row; c++)
	{
		for(int i = 0; i < col; i++)
		{
			array[c][i] = ' ';
			flag[c][i] = 0;
		}
	}
}

void findAll(int row, int col, int height, int width)
{
	if(row >= 0 && col >= 0 && row < height && col < width && array[row][col] == '@' && flag[row][col] == 0)
	{
		
		flag[row][col] = 1;
		
		findAll(row + 1, col, height, width);
		findAll(row - 1, col, height, width);
		findAll(row, col + 1, height, width);
		findAll(row, col - 1, height, width);
		findAll(row - 1, col - 1, height, width);
		findAll(row + 1, col + 1, height, width);
		findAll(row - 1, col + 1, height, width);
		findAll(row + 1, col - 1, height, width);
	}
}


int main() {
	
	int row = 0;
	int col = 0;
	
	scanf("%d", &row);
	scanf("%d", &col);
	
	while(row != 0 && col != 0)
	{
		char input[col];
		
		for(int c = 0; c < row; c++)
		{
			scanf("%s", &input);
			for(int i = 0; i < col; i++)
			{
				array[c][i] = input[i];
			}
		}
		
		
		for(int c = 0; c < row; c++)
		{
			for(int i = 0; i < col; i++)
			{
				if(flag[c][i] == 0 && array[c][i] == '@')
				{
					count++;
					findAll(c, i, row, col);
				}
			}
		}
		
		printf("%d\n", count);
		count = 0;
		
		clearArrays(row, col);
		scanf("%d", &row);
		scanf("%d", &col);
	}
	
	return 0;
}