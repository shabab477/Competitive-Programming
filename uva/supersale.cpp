#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int array[10000][10000];
int value[10000];
int weight[10000];
int question[1000];

int knapsack(int total, int target)
{
	for(int c = 1; c <= total; c++)
	{
		for(int i = 1; i <= target; i++)
		{
			if(i >= weight[c])
			{
				array[c][i] = max(value[c] + array[c - 1][i - weight[c]], array[c - 1][i]);
			}
			else
			{
				array[c][i] = array[c - 1][i];
			}
		}
	}
	
	return array[total][target];
}

int main() {
	
	int n = 0;
	
	scanf("%d", &n);
	
	while(n--)
	{
		int m = 0;
		scanf("%d", &m);
		
		for(int c = 1; c <= m; c++)
		{
			scanf("%d", &value[c]);
			scanf("%d", &weight[c]);
		}
		
		int test = 0;
		scanf("%d", &test);
		int sum = -1;
		int count = 0;
		while(test--)
		{
			
			scanf("%d", &question[count]);
			count++;
			
			sum = max(sum, question[count - 1]);
		}
		
		knapsack(m, sum);
		
		int val = 0;
		for(int c = 0; c < count; c++)
		{
			val += array[m][question[c]];
		}
		printf("%d\n", val);
	}
	
	return 0;
}
