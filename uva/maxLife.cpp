#include <iostream>
using namespace std;
#include <stdio.h>

int main() {

	int h = 0;
	int a = 0;
	
	
	
	int n = 0;
	
	scanf("%d", &n);
	
	for(int c = 1; c <= n; c++)
	{
		int count = 0;
		scanf("%d %d", &h, &a);
		bool flag = true;
		
		while(h > 0 && a > 0)
		{
		
			bool gone = true;
			if(flag && ((h + 3 > 0) && (a + 2 > 0)))
			{
				h += 3;
				a += 2;
				flag = false;
				count++;
				gone = false;
			}
			else if((h - 5) > 0 && (a - 10) > 0)
			{
				h -= 5;
				a -= 10;
				flag = true;
				gone = false;
				count++;
			}
			else if((h - 20 > 0) && (a + 5) > 0)
			{
				h -= 20;
				a += 5;
				flag = true;
				gone = false;
				count++;
			}
			if(gone)
			{
				break;
			}
			
			
		}
		
		printf("%d\n", count);
		
	}
	return 0;
}