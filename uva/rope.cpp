#include <iostream>
using namespace std;
#include <stdio.h>
#include <math.h>

int main() {
	
	double arrayX[101];
	double arrayY[101];
	
	int t = 0;
	int r = 0;
	
	scanf("%d", &t);
	scanf("%d", &r);
	
	for(int c = 0; c < t; c++)
	{
		scanf("%f", &arrayX[c]);
		scanf("%f", &arrayY[c]);
	}
	
	double sum = 0;
	
	for(int c = 0; c < t - 1; c++)
	{
		double p1 = pow(arrayX[c] - arrayX[c + 1], 2);
		double p2 = pow(arrayY[c] - arrayY[c + 1], 2);
		sum += sqrt(p1 + p2);	
	}
	double p1 = pow(arrayX[t - 1] - arrayX[0], 2);
	double p2 = pow(arrayY[t - 1] - arrayY[0], 2);
	sum += sqrt(p1 + p2);
	
	sum += (2 * 3.141592654 * r);
	
	printf("%.2f\n", sum);
	
	return 0;
}