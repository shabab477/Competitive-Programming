#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	
	long long int array[6][30001];
	int coin[6];
	
	coin[1] = 1;
	coin[2] = 5;
	coin[3] = 10;
	coin[4] = 25;
	coin[5] = 50;
	
	for(int c = 0; c < 6; c++)
	{
		array[c][0] = 1;
		
	}
	
	for(int c = 0; c < 30001; c++)
	{
		array[0][c] = 0;
	}
	
	for(int i = 1; i < 6; i++)
	{
		for(int j = 1; j < 30001; j++)
		{
			if(j >= coin[i])
			{
				array[i][j] = array[i - 1][j] + array[i][j - coin[i]];
				
			}
			else
			{
				array[i][j] = array[i - 1][j];
			}
		}
	}
	
	int n = 0; 
	
	while(scanf("%d", &n) != EOF)
	{
		if(array[5][n] == 1)
		{
			printf("There is only 1 way to produce %d cents change.\n", n);
		}
		else
		{
			printf("There are %lld ways to produce %d cents change.\n", array[5][n], n);
		}
	}
	
	return 0;
}