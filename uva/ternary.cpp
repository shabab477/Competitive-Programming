#include <bits/stdc++.h>
using namespace std;

int main() {
	
	
	string s = "";
	getline(cin, s);
	int length = s.length();
	
	for(int c = 0; c < length;)
	{
		if(s.at(c) == '.')
		{
			printf("%d", 0);
			c++;
		}
		else if(s.at(c) == '-')
		{
			if(s.at(c + 1) == '.')
			{
				printf("%d", 1);
			}
			else
			{
				printf("%d", 2);
			}
			c += 2;
		}
	}
	printf("\n");
	return 0;
}