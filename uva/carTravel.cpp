#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <sstream>
#include <math.h>
using namespace std;

int array[100][500];
vector<int> vect;
string line;

int knapsack(int total, int target)
{
	for(int c = 1; c <= total; c++)
	{
		for(int i = 1; i <= target; i++)
		{
			if(i >= vect[c - 1])
			{
				array[c][i] = max(vect[c - 1] + array[c - 1][i - vect[c - 1]], array[c - 1][i]);
			}
			else
			{
				array[c][i] = array[c - 1][i];
			}
		}
	}
	
	return array[total][target];
}

int main() {
	
	int tc = 0; 
	scanf("%d", &tc);
	getline(cin, line);
	
	while(tc--)
	{
		getline(cin, line);
		istringstream os(line);
		int i;
		int sum = 0;
		int count = 0;
		while(os >> i)
		{
			vect.push_back(i);
			sum += i;
			count++;
		}
		
		int tr = sum / 2;
		knapsack(count, tr);
		
		if(array[count][tr] * 2 == sum)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
		
		vect.clear();
	}
	return 0;
}
