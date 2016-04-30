#include <cstring>
#include <iostream>
using namespace std;

long long int jack[10000000];


bool binarySearch(long long int value, long long int start, long long int end)
{
	if(start > end)
	{
		return false;
	}
	else
	{
		if(jack[start] == value)
		{
			return true;
		}
		if(jack[end] == value)
		{
			return true;
		}
		
		int mid = (start + end) / 2;
		if(jack[mid] == value)
		{
			return true;
		}
		
		if(jack[mid] < value)
		{
			return binarySearch(value, mid, end - 1);
		}
		else
		{
			return binarySearch(value, start + 1, mid);
		}
	}
	
}

int main() {
	
	long long int n = 0;
	long long int m = 0;
	
	scanf("%lld %lld", &n, &m);
	
	while(n != 0 || m != 0)
	{
		memset(jack, 0, sizeof(jack));
		
		
		for(long long int c = 0; c < n; c++)
		{
			scanf("%lld", &jack[c]);
			
		}
		
		long long int count = 0;
		for(long long int c = 0; c < m; c++)
		{
			long long int val = 0;
			scanf("%lld", &val);
			if(binarySearch(val, 0, n - 1))
			{
				count++;
			}
		}
		
		printf("%lld\n", count);
		scanf("%lld %lld", &n, &m);
	}
	return 0;
}