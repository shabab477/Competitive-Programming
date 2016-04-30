#include <math.h>
#include <iostream>
using namespace std;

int main() {
	
	int v = 0;
	int t = 0;
	while(scanf("%d %d", &v, &t) != EOF)
	{
		printf("%d\n", v * t * 2);
	}
	
	return 0;
}