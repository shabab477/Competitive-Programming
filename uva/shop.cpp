#include <iostream>
using namespace std;
#include <math.h>
#include <algorithm>
#include <stdio.h>

int prices[30000];

bool myfunction (int i,int j) 
{
	return (i>j); 
}

int main() {
	
	int n = 0;
	scanf("%d", &n);
	
	for(int c = 0; c < n; c++)
	{
		int number = 0;
		scanf("%d", &number);
		
		for(int i = 0; i < number; i++)
		{
			scanf("%d", &prices[i]);
		}
		
		sort(prices, prices + number, myfunction);
		
		int rem = number % 3;
		int cost = 0;
		
		for(int c = 0; c < (number - rem); c += 3)
		{
			cost += min(min(prices[c], prices[c + 1]), prices[c + 2]);
		}
		
		printf("%d\n", cost);
		
	}
	

	
	return 0;
}