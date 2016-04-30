#include <iostream>
#include <bitset>
#include <string.h>
#include <string>
#include <math.h>

using namespace std;

int main() {
	
	signed int n = 0;
	while(scanf("%d", &n) != EOF)
	{
		bitset<32> answer(0);
		bitset<32> num(n);
		int i = 24;
		int j = 0;
		
		while(i >= 0)
		{
			for(int c = 0; c < 8; c++)
			{
				if(num.test(c + i))
				{
					answer.set(c + j);
				}
			}
			i -= 8;
			j += 8;
		}
		
		printf("%d converts to %d\n", n, answer.to_ulong());
	}
	
	return 0;
}
