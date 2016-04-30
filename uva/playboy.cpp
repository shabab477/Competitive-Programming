#include <iostream>
#include <cstring>
using namespace std;


int array[50000];
int shorter[50000];
int taller[50000];

int main() {
	
	int t = 0;
	scanf("%d", &t);
	
	for(int c = 0; c < t; c++)
	{
		scanf("%d", &array[c]);
	}
	int j = 0;
	scanf("%d", &j);
	
	for(int c = 0; c < j; c++)
	{
		int val = 0;
		scanf("%d", &val);
		
		int tallSize =0;
		int shortSize = 0;
		for(int k = 0; k < t; k++)
		{
			if(array[k] < val)
			{
				shorter[shortSize] = array[k];
				shortSize++;
			}
			else if(array[k] > val)
			{
				taller[tallSize] = array[k];
				tallSize++;
				break;
			}
		}
		
		if(shortSize  != 0)
		{
			printf("%d ", shorter[shortSize - 1]);
		}
		else
		{
			printf("X ");
		}
		
		if(tallSize != 0)
		{
			printf("%d\n", taller[0]);
		}
		else
		{
			printf("X\n");
		}
		
		memset(shorter, 0, sizeof(shorter));
		memset(taller, 0, sizeof(taller));
	}
	return 0;
}
