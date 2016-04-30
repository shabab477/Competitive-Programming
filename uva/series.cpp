#include <iostream>
using namespace std;

int temp[200001];

int main() {
	temp[0] = 0;
	temp[1] = 1;
	
	int size = -1;
	int n = 0;
	
	scanf("%d", &n);
	
	while(n != 0)
	{
		for(int c = 1; c <= n/2; c++)
		{
			temp[c * 2] = temp[c];
			temp[(c * 2) + 1] = temp[c] + temp[c + 1];
		}
		
		int max = -1;
		
		for(int c = 0; c <= n; c++)
		{
			if(max <= temp[c])
			{
				max = temp[c];
			}
		}
		
		printf("%d\n", max);
		
		scanf("%d", &n);
	}
	
	
	
	return 0;
}