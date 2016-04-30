#include <iostream>
#include <math.h>
using namespace std;

double p, n;

int main() {
	
	while(scanf("%lf", &p) != EOF)
	{
		scanf("%lf", &n);
		
		printf("%lld\n", (long long int)round(pow(n, 1/p)));
	}
	return 0;
}
