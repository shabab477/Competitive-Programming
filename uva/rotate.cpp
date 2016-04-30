#include <math.h>
#include <stdio.h>
#include <list>
#include <iostream>
using namespace std;

int main() {
	
	
	int n = 0;
	scanf("%d", &n);
	
	for(int c = 0; c < n; c++)
	{
		list<int> vect;
	
		long long int num = 0;
		scanf("%lld", &num);
		
		long long int temp = num;
		long long int count = 0;
		while(temp != 0)
		{
			temp = temp / 10;
			count++;
		}
		
		temp = num;
		for(int i = 0, mod = count - 1; i < count; i++, mod--)
		{
			long long int rem = temp / (int)pow(10, mod);
			temp = temp % (int)pow(10, mod);
			vect.push_back(rem);
		}
		
		long long int max = 0;
		for(int i = 0; i < count; i++)
		{
			vect.push_back(vect.front());
			vect.erase(vect.begin());
			
			if(vect.front() == 0)
			{
				vect.erase(vect.begin());
			}
			int size = vect.size();
			
			long long int num = 0;
			int mod = size - 1;
			for (std::list<int>::const_iterator iterator = vect.begin(), end = vect.end(); iterator != end; ++iterator) 
			{
			
				num += (*iterator * (int)pow(10, mod));
				mod--;
			}
				
			
			
			
			if(max < num)
			{
				max = num;
			}
		}
		
		vect.clear();
		temp = num;
		for(int i = 0, mod = count - 1; i < count; i++, mod--)
		{
			long long int rem = temp / (int)pow(10, mod);
			temp = temp % (int)pow(10, mod);
			vect.push_back(rem);
		}
		
		
		for(int i = 0; i < count; i++)
		{
			vect.push_front(vect.back());
			vect.pop_back();
			
				
			
			if(vect.front() == 0)
			{
				vect.erase(vect.begin());
			}
			int size = vect.size();
			long long int num = 0;
			int mod = size - 1;
			for (std::list<int>::const_iterator iterator = vect.begin(), end = vect.end(); iterator != end; ++iterator) 
			{
			
				num += (*iterator * (int)pow(10, mod));
				mod--;
			}
			
		//	printf("%lld\n", num);
			if(max < num)
			{
				max = num;
			}
		}
		
		if(count > 2)
		{
			if(num > max)
			{
				printf("%lld\n", num);
			}
			else
			{
				printf("%lld\n", max);		
			}
		}
		else
		{
			printf("%lld\n", max);
		}
	}
	return 0;
}