#include <iostream>
using namespace std;

int array[51];

int main() {
	
	int test = 0;
	scanf("%d", &test);
	int t = 1;
	while(test--)
	{
		int n = 0;
		scanf("%d", &n);
		for(int c = 0; c < n; c++)
		{
			scanf("%d", &array[c]);
		}
		
		int low = 0;
		int high = 0;
		
		for(int c = 1; c < n; c++)
		{
			if(array[c - 1] < array[c])
			{
				high++;
			}
			else if(array[c - 1] > array[c])
			{
				low++;
			}
		}
		
		printf("Case %d: %d %d\n", t, high, low);
		t++;
		
	}
	return 0;
}