#include <iostream>
using namespace std;
#include <string.h>


int array[10001][10001];
int trans[10001][10001];

int main() {
	
	int m = 0;
	int n = 0;
	
	
	

	while(scanf("%d %d", &m, &n) != EOF)
	{
			printf("%d %d\n", n, m);
		for(int c = 0; c < m; c++)
		{
			int r = 0;
			scanf("%d", &r);
			
			if(r != 0)
			{
				int q[r];
				
				for(int i = 0; i < r; i++)
				{
					int num = 0;
					scanf("%d", &num);
					q[i] = num - 1;
				}
				
				for(int i = 0; i < r; i++)
				{
					int num = 0;
					scanf("%d", &num);
					array[c][q[i]] = num;
				}
			}
				
		}
		
		for(int c = 0; c < m; c++)
		{
			for(int i = 0; i < n; i++)
			{
				trans[i][c] = array[c][i];
			}
		}
		
		for(int c = 0; c < n; c++)
		{
			int count = 0;
			for(int i = 0; i < m; i++)
			{
				if(trans[c][i] != 0)
				{
					count++;
				}
			}
			
			if(count == 0)
			{
				printf("%d\n", 0);
				printf("\n");
			}
			else
			{
				printf("%d ", count);
				int q[count];
				int size = 0;
				for(int i = 0; i < m; i++)
				{
					if(trans[c][i] != 0 && i != m - 1)
					{
						printf("%d ", i + 1);
						q[size] = trans[c][i];
						size++;
					}
					else if(trans[c][i] != 0)
					{
						printf("%d", i + 1);
						q[size] = trans[c][i];
						size++;	
					}
				}
				
				printf("\n");
				for(int k = 0; k < count; k++)
				{
					if(k != count - 1)
					{
						printf("%d ", q[k]);
					}
					else
					{
						printf("%d", q[k]);
					}
				}
				
				printf("\n");
			}
			
		}
		memset(array, 0, sizeof(array[0][0]) * 10001 * 10001);
		memset(trans, 0, sizeof(trans[0][0]) * 10001 * 10001);
		
	}
	
	return 0;
}