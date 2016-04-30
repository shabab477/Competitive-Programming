#include <cstring>
#include <iostream>
#include <stdio.h>
using namespace std;



int main() {
	
	int n = 0;
	scanf("%d", &n);
	
	for(int c = 0; c < n; c++)
	{
		double pup = 0;
		scanf("%lf", &pup);
		double array[(int)pup];
		
		double sum = 0;
		memset(array, 0, sizeof(array));
		for(int i = 0; i < pup; i++)
		{
			scanf("%lf", &array[i]);
			sum += array[i];
		}
		
		double avg = sum / pup;
		double count = 0;
		for(int i =0; i < pup; i++)
		{
			if(array[i] > avg)
				count++;
		}
		
		printf("%.3lf\%\n", (count / pup) * 100);
	}
	return 0;
}