#include <iostream>
#include <stdio.h>
using namespace std;


int main() {
	
	int coin[6];
	coin[1] = 50;
	coin[2] = 25;
	coin[3] = 10;
	coin[4] = 5;
	coin[5] = 1;
	
	int n = 0;
	
	int array[6][7489 + 1];
	for(int c = 0; c < 6; c++)
	{
		array[c][0] = 1;
	}
	
	for(int c = 0; c < 7489 + 1; c++)
	{
		array[0][c] = 0;
	}
	
	for(int i = 1; i < 6; i++)
	{
		for(int j = 1; j < (7489 + 1); j++)
		{
			if(j >= coin[i])
			{
				array[i][j] = array[i - 1][j] + array[i][j - coin[i]];
				//printf("here");
			}
			else
			{
				array[i][j] = array[i - 1][j];
				//printf("here");
			}
		}
	}
	
	
	n = 0;
	while(scanf("%d", &n) != EOF)
	{
		printf("%d\n", array[5][n]);
	}
	
	
	
	return 0;
}