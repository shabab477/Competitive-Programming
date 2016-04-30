#include <iostream>
using namespace std;
#include <stdio.h>
#include <math.h>


double array[202];

int main() {
	
	int n = 0;
	int r  = 0;
	scanf("%d", &n);
	scanf("%d", &r);
	
	if(n == 1)
	{
		printf("%.2lf", 2 * 3.14159 * r);
		return 0;
	}
	for(int c = 0; c < n * 2; c++)
	{
		scanf("%lf", &array[c]);
		
		
		
	}
	
	
	double sum = 0;
	
	for(int c = 0; c < (n * 2) - 2; c += 2)
	{
		float a1 = (array[c] - array[c + 2]) * (array[c] - array[c + 2]);
		float a2 = (array[c + 1] - array[c + 3]) * (array[c + 1] - array[c + 3]);
		
		float sq = a1 + a2;
		sum += sqrt(sq);
		
	}
	
	printf("%lf\n", sum);
	float a1 = (array[n - 2] - array[0]) * (array[n - 2] - array[0]);
	float a2 = (array[n - 1] - array[1]) * (array[n - 1] - array[1]);
		
	float sq = a1 + a2;
	sum += sqrt(sq);

	
	
	double peri = ((3.14159* r) / 2) * n;
	
	printf("%.2lf\n", sum + peri);
	return 0;
}