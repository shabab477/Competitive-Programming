#include <algorithm>
#include <iostream>
using namespace std;
 
long long int morn[101];
long long int eve[101];
int main() {
 
	int n = 0;
	int d = 0;
	int r = 0;
 
	scanf("%d %d %d", &n, &d, &r);
	while(n != 0 && d != 0 && r != 0)
	{
		for(int c = 0; c < n; c++)
		{
			scanf("%lld", &morn[c]);
		}
		for(int c = 0; c < n; c++)
		{
			scanf("%lld", &eve[c]);
		}
		sort(morn, morn + n);
		sort(eve, eve + n);
 
		long long int sum = 0;
		for(int c = 0, i = n - 1; c < n; c++, i--)
		{
			long long int temp = morn[c] + eve[i];
			if(temp > d)
			{
				sum += (temp - d) * r;
			}
		}
		printf("%lld\n", sum);
 
		scanf("%d %d %d", &n, &d, &r);
	}
	return 0;
}