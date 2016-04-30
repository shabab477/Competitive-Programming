#include <iostream>
#include <math.h>
#include <algorithm>
using namespace std;

int array[110][250000];

int coin[110];

int main() {
	
	int m, n = 0;
	scanf("%d", &n);
	
	
	
	for(int c = 0; c < n; c++)
	{
		scanf("%d", &m);
		int sum = 0;
		
		
		for(int i = 1; i <= m; i++)
		{
			scanf("%d", &coin[i]);
			//printf("%d\n", coin[i]);
			sum += coin[i];
		}
		
		int target = (sum / 2);
		
		for (int i = 1; i <= m; i++) {
			for (int j = 1; j <= target; j++) {
				
					if (coin[i] <= j) {
					
						if(coin[i] + array[i - 1][j - coin[i]] > array[i - 1][j])
						{
							array[i][j] = coin[i] + array[i - 1][j - coin[i]];
							
						}
						else
						{
							array[i][j] = array[i - 1][j];
							
						}
						
					} 
					else 
					{
						
						array[i][j] = array[i - 1][j];
					}
				}
			}
			
			
		
		printf("%d\n", sum - (2 * array[m][target]));	
	}
	
	
	
	return 0;
}
