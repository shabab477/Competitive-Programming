#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

int array[501];
int main() {
	
	int test = 0;
	scanf("%d", &test);
	
	for(int t = 0; t < test; t++)
	{
		int rel = 0;
		scanf("%d", &rel);
		int maxim = -1;
		for(int c = 0; c < rel; c++)
		{
			scanf("%d", &array[c]);
			maxim = max(array[c], maxim);
		}
		
		int minim = pow(2, 30);
		
		for(int c = 0; c <= maxim; c++)
		{
			int sum = 0;
			for(int i = 0; i < rel; i++)
			{
				sum += abs(c - array[i]);
			}
			minim = min(sum, minim);
		}
		
		printf("%d\n", minim);
	}
	return 0;
}