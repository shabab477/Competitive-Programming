#include <iostream>
using namespace std;

long long int count = 0;

void cigs(long long int n, long long int k)
{
	if(n < k)
	{
		count += n;
	}
	else
	{
		count += k;
		cigs(n - k + 1, k);
	}
}
int main() {
	
	long long int n, k;
	while(scanf("%lld %lld", &n, &k) != EOF)
	{
		cigs(n, k);
		printf("%lld\n", count);
		count = 0;
	}
	
	return 0;
}