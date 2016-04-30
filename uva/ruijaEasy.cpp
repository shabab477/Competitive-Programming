#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

struct occur
{
	vector<int> vect;
}array[1000010];


int main() {
	
	int s, q = 0;
	
	while(scanf("%d %d", &s, &q) != EOF)
	{
		for(int c = 0; c < s; c++)
		{
			int ans = 0;
			scanf("%d", &ans);
			
			array[ans].vect.push_back(c + 1);
		}
		
		for(int c = 0; c < q; c++)
		{
			int k, e = 0;
			
			scanf("%d %d", &k, &e);
			
			if(array[e].vect.size() >= k)
			{
				printf("%d\n", array[e].vect[k - 1]);
			}
			else
			{
				printf("0\n");
			}
		}
	}
	
	return 0;
}