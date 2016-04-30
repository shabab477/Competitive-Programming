#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;

int main() {
	
	int test = 0;
	scanf("%d", &test);
	while(test--)
	{
	
		long long int n = 0;
		scanf("%lld", &n);
		
		long long int sum = n * 567;
		sum /= 9;
		sum += 7492;
		sum *= 235;
		sum /= 47;
		sum -= 498;
		string str = to_string(sum);
		if(str.length() == 1)
		{
			printf("%d\n", 0);
		}
		else
		{
			printf("%c\n", str[str.length() - 2]);
		}
	}
	
	return 0;
}