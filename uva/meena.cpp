#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;


int checker[10001];
int bSearch(int low, int high, int num, int array[])
{
	if(low > high)
	{
		return -1;
		
	}
	else
	{
		int mid = (low + high) / 2;
		if(array[low] == num)
		{
			return low;
		}
		else if(array[high] == num)
		{
			return high;
		}
		else if(array[mid] == num)
		{
			return mid;
		}
		
		if(array[mid] > num)
		{
			return bSearch(low + 1, mid - 1, num, array);
		}
		else
		{
			return bSearch(mid + 1, high - 1, num, array);
		}
		
	}
}

int main() {
	
	int marbles = 0;
	int q = 0;
	scanf("%d %d", &marbles, &q);
	int cs = 1;
	
	while(marbles != 0 & q != 0)
	{
		int array[marbles];
		int size = 0;
		memset(checker, 0, sizeof(checker));
		
		for(int c = 0; c < marbles; c++)
		{
			int val = 0;
			scanf("%d", &val);
			array[c] = val;
		}
		
		sort(array, array + marbles);
		
		printf("CASE# %d:\n", cs);
		
		for(int c = 0; c < q; c++)
		{
			int find = 0;
			scanf("%d", &find);
			bool flag = false;
			int k = -1;
			for(int j = 0; j < marbles; j++)
			{
				if(array[j] == find)
				{
					k = j;
					flag = true;
					break;
				}
			}
			
			if(flag)
			{
				printf("%d found at %d\n", find, k + 1);
			}
			else
			{
				printf("%d not found\n", find);
			}
		}
		
		cs++;
		scanf("%d %d", &marbles, &q);
	}
	
	
	
	return 0;
}