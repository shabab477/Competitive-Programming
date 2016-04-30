#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;



int main() {
	
	int n = 9999;
	
	long long int array[22][10001];
	
	for(int c = 0; c < 10001; c++)
	{
		array[0][c] = 0;
	}
	
	for(int c = 0; c < 22; c++)
	{
		array[c][0] = 1;
	}
	
	
		
	int total = (n + 1);
	for(int i = 1; i < 22; i++)
	{
		for(int j = 1; j < total; j++)
		{
			if(j >= pow(i, 3))
			{
				array[i][j] = array[i - 1][j] + array[i][(int)(j - pow(i, 3))];
			}
			else
			{
				array[i][j] = array[i - 1][j];
			}
		}
	}
	
	while(scanf("%d", &n) != EOF)
	{
		printf("%lld\n", array[21][n]);
	}
	
	
	
	return 0;
}