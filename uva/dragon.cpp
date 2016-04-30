#include <iostream>
using namespace std;
#include <algorithm>
#include <stdio.h>
 
int dragons[30000];
int knights[30000];
 
 
int main() {
 
	int n = 0;
	int m = 0;
 
	scanf("%d %d", &n, &m);
 
	while(n != 0 && m != 0)
	{
		int cost = 0;
 
		for(int c = 0; c < n; c++)
		{
			scanf("%d", &dragons[c]);
		}
 
		for(int c = 0; c < m; c++)
		{
			scanf("%d", &knights[c]);
		}
 
		sort(dragons, dragons + n);
		sort(knights, knights + m);
 
		//printf("Shortest : %d\n", dragons[0]);
 
		int d = 0; 
		int k = 0;
 
		while(d < n && k < m)
		{
			if(dragons[d] <= knights[k])
			{
				cost += knights[k];
				d++;
				k++;
			}
			else
			{
				k++;
			}
		}
 
		if(d < n)
		{
			printf("Loowater is doomed!\n");
		}
		else
		{
			printf("%d\n", cost);
		}
 
		scanf("%d %d", &n, &m);
	}
 
	return 0;
}