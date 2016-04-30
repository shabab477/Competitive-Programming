#include <iostream>
#include <math.h>
#include <algorithm>

using namespace std;

int temp[110];
int n;
int array[110][110];

void clear()
{
	for(int c = 0; c < n; c++)
	{
		temp[c] = 0;
	}
}

int kadane()
{
	int sum = temp[0];
	int cur = temp[0];
	for(int c = 1; c < n; c++)
	{
		if(cur < 0)
		{
			cur = temp[c];
		}
		else
		{
			cur += temp[c];
		}
		
		if(cur > sum)
		{
			sum = cur;
		}
	}
	return sum;
}

int main() {
	
	while(scanf("%d", &n) != EOF)
	{
		int currentSum = 0;
		int maxSum = -1 * 127 * 127 * 127;
		for(int c = 0; c < n; c++)
		{
			for(int i = 0; i < n; i++)
			{
				scanf("%d", &array[c][i]);
			}
		}
		
		
		for(int c = 0; c < n; c++)
		{
			clear();
			for(int i = c; i < n; i++)
			{
				for(int j = 0; j < n; j++)
				{
					temp[j] += array[i][j];
				}
				int cur = kadane();
				if(cur > maxSum)
				{
					maxSum = cur;
				}
			}
		}
		
		printf("%d\n", maxSum);
	}
	return 0;
}
