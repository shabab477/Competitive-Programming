#include <iostream>
using namespace std;

double array[1001];

int main() {
	int test = 0;
	
	scanf("%d", &test);
	
	for(int t = 0; t < test; t++)
	{
		int n = 0;
		scanf("%d", &n);
		
		double sum = 0;
		
		for(int c = 0; c < n; c++)
		{
			scanf("%lf", &array[c]);
			sum += array[c];
		}
		
		
		double avg = sum / n;
		
		double count = 0;
		for(int c = 0; c < n; c++)
		{
			if(array[c] > avg)
			{
				count++;
			}
		}
		
		printf("%.3lf\%\n", count / n * 100);
		
	}
	
	return 0;
}