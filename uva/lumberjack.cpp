#include <iostream>
#include <algorithm>

using namespace std;


int temp[10];
int array[10];


int main() {
	
	printf("Lumberjacks:\n");
	int tc = 0;
	scanf("%d", &tc);
	while(tc--)
	{
		for(int c = 0; c < 10; c++)
		{
			scanf("%d", &array[c]);
			temp[c] = array[c];
		}
		
		sort(temp, temp + 10);
		bool flag1 = true;
		bool flag2 = true;
		
		for(int c = 0; c < 10; c++)
		{
			if(array[c] != temp[c])
			{
				flag1 = false;
				break;
			}
		}
		
		for(int c = 9, i = 0; c >= 0; c--, i++)
		{
			if(array[i] != temp[c])
			{
				flag2 = false;
				break;
			}
		}
		
		if(flag1 || flag2)
		{
			printf("Ordered\n");
		}
		else
		{
			printf("Unordered\n");
		}
	}
	return 0;
}
