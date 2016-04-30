#include <iostream>
using namespace std;

long long int array[1000001];
int flag[1000001];
int size = 0;

int main() {
	
	flag[2] = 1;
	flag[0] = 1;
	flag[1] = 1;
	for(int c = 3; c <= 1000000; c += 2)
	{
		if(flag[c] == 0)
		{
			array[size] = c;
			size++;
			
			for(int i = c * 2, mult = 2; i <= 1000000; i = c * mult)
			{
				flag[i] = 1;	
				mult++;
			}
		}
			
	}
	
	int n = 0;
	scanf("%d", &n);
	
	while(n != 0)
	{
		bool fl= false;
		int sub1 = -1;
		int sub2 = -1;
		for(int c = 0; c < size && array[c] <= n; c++)
		{
			sub1 = array[c];
			sub2 = n - array[c];
			if(flag[sub2] == 0)
			{
				fl = true;
				break;
			}
		}
		
		if(fl)
		{
			printf("%d = %d + %d\n", n, sub1, sub2);
		}
		else
		{
			printf("Goldbach's conjecture is wrong.\n");
		}
		scanf("%d", &n);
	}
	
	
	return 0;
}