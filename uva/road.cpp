#include <iostream>
#include <stdio.h>

using namespace std;
int m[2000];
int size = 0;
int median = 1;
int answer[2000];

void findMedian(int n)
{
	while(median <= n)
	{
		bool flag = true;
		for(int c = 0; c < size; c++)
		{
			if(m[c] == median)
			{
				flag =false;
				break;
			}
		}
		
		if(flag)
		{
			break;
		}
		else
		{
			median++;
		}
	}
}


int main() {
	
	int n = 0;
	scanf("%d", &n);
	
	int con = 0;
	scanf("%d", &con);
	
	for(int c = 0; c < con; c++)
	{
		scanf("%d", &m[size]);
		size++;
		scanf("%d", &m[size]);
		size++;
		findMedian(n);
	}
	
	size = 0;
	int num = 0;
	for(int c = 1; c < median; c++)
	{
		answer[size] = c;
		size++;
		answer[size] = median;
		size++;
		num++;
	}
	
	
	for(int c = median + 1; c <= n; c++)
	{
		answer[size] = c;
		size++;
		answer[size] = median;
		size++;
		num++;
	}
	
	printf("%d\n", num);
	
	for(int c = 0; c < (num * 2); c++)
	{
		if(c % 2 == 0)
		{
			printf("%d ", answer[c]);
			
		}
		else
		{
			printf("%d\n", answer[c]);
		}
	}
	return 0;
}