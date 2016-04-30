#include <iostream>
#include <stdio.h>
#include <vector>
#include <math.h>
#include <algorithm>
using namespace std;

vector<int> vect;

int main() {
	
	int n = 0;
	scanf("%d", &n);
	
	int in = 0;
	
	scanf("%d", &in);
	
	while(in != -1)
	{
		vect.push_back(in);
		scanf("%d", &in);
	}
	
	int sz = vect.size();
	
	for(int c = 0; c < sz - n + 1; c++)
	{
		int maxim = vect[c];
		int lim = c + n;
		for(int i = c + 1; i < lim; i++)
		{
			maxim = max(vect[i], maxim);
		}
		
		printf("%d\n", maxim);
	}
	
	return 0;
}