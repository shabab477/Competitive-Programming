#include <iostream>
#include <stdio.h>
#include <string.h>
#include <string>
using namespace std;



int main() {
	
	int n = 0;
	string s = "";
	scanf("%d", &n);
	getline(cin, s);
	for(int c = 0; c < n; c++)
	{
		int count = 0;
		int sumX = 0;
		int sumY = 0;
		getline(cin, s);
		int k = s.length();
		//printf("%d\n", k);
		for(int j = 0; j < k; j++)
		{
			if(s.at(j) == '?')
			{
				count++;
			}
			else if(s.at(j) == 'U')
			{
				sumY++;
			}
			else if(s.at(j) == 'D')
			{
				sumY--;
			}
			else if(s.at(j) == 'L')
			{
				sumX--;
			}
			else if(s.at(j) == 'R')
			{
			
				sumX++;
			}
		}
		
		printf("%d ", sumX + (count * -1));
		printf("%d ", sumY + (count * -1));
		printf("%d ", sumX + (count * 1));
		printf("%d\n", sumY + (count * 1));
		
	}
	return 0;
}