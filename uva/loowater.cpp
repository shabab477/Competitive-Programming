#include <iostream>
#include <algorithm>
using namespace std;

int head[20001];
int knight[20001];

int main() {
	
	int n = 0;
	int m = 0;
	
	scanf("%d %d", &n, &m);
	while(n != 0 && m != 0)
	{
		for(int c = 0; c < n; c++)
		{
			scanf("%d", &head[c]);
		}
		
		for(int c = 0; c < m; c++)
		{
			scanf("%d", &knight[c]);
		}
		
		if(n <= m)
		{
			sort(knight, knight + m);
			sort(head, head + n);
			
			long long int sum = 0;
			int i = 0;
			int j = 0;
			while(i < n && j < m)
			{
				if(head[i] <= knight[j])
				{
					sum += knight[j];
					i++;
					j++;
				}
				else
				{
					j++;
				}
			}
			
			if(i == n)
			{
				printf("%lld\n", sum);
			}
			else
			{
				printf("Loowater is doomed!\n");
			}
		}
		else
		{
			printf("Loowater is doomed!\n");
		}
		scanf("%d %d", &n, &m);
	}
	return 0;
}