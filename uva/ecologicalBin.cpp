#include <iostream>
#include <algorithm>
#include <math.h>
using namespace std;

struct bin
{
	long long int br;
	long long int g;
	long long int cl;
};

int val[3];
char color[3];

long long int maxim = (int)pow(2, 31);
char b1;
char b2;
char b3;

int main() {
	
	color[0] = 'B';
	color[1] = 'G';
	color[2] = 'C';
	int n = 0;
	int m = 0;
	int k = 0;
	
	while(scanf("%d %d %d", &n, &m, &k) != EOF)
	{
		val[0] = 0;
		val[1] = 1;
		val[2] = 2;
		
		maxim = (int)pow(2, 31);
		
		bool flag = true;
		int o2t = 0;
		int t2t = 0;
		int diff = 0;
		bin array[3];
		
		array[0].br = n;
		array[0].g = m;
		array[0].cl = k;
		
		for(int c = 1; c < 3; c++)
		{
			scanf("%d %d %d", &n, &m, &k);
			array[c].br = n;
			array[c].g = m;
			array[c].cl = k;
		}
		
		do
		{
			
			int sum = 0;
			if(val[0] == 0)
			{
				for(int c = 1; c < 3; c++)
				{
					sum += array[c].br;
				}
			}
			else if(val[0] == 1)
			{
				for(int c = 1; c < 3; c++)
				{
					sum += array[c].g;
				}
			}
			else
			{
				
				for(int c = 1; c < 3; c++)
				{
					sum += array[c].cl;
				}
			
			}
			
			if(val[1] == 0)
			{
				for(int c = 1; c <= 2; c++)
				{
					sum += array[(1 + c) % 3].br;
				}
			}
			else if(val[1] == 1)
			{
				for(int c = 1; c <= 2; c++)
				{
					sum += array[(1 + c) % 3].g;
				}
			}
			else
			{
				
				for(int c = 1; c <= 2; c++)
				{
					sum += array[(1 + c) % 3].cl;
				}
			
			}
			
			if(val[2] == 0)
			{
				for(int c = 1; c <= 2; c++)
				{
					sum += array[(2 + c) % 3].br;
				}
			}
			else if(val[2] == 1)
			{
				for(int c = 1; c <= 2; c++)
				{
					sum += array[(2 + c) % 3].g;
				}
			}
			else
			{
				
				for(int c = 1; c <= 2; c++)
				{
					sum += array[(2 + c) % 3].cl;
				}
			
			}
			
			if(sum <= maxim)
			{
				//printf("%c %c %c %d\n", color[val[0]], color[val[1]], color[val[2]], sum);
				if(flag)
				{
					b1 = color[val[0]];
					b2 = color[val[1]];
					b3 = color[val[2]];
					maxim = sum;
					flag = false;
					
					o2t = abs(b1 - b2);
					t2t = abs(b2 - b3);
					diff = (o2t + t2t);
					
				}
				else
				{
					
					if(sum == maxim)
					{
						if(color[val[0]] < b1)
						{
							b1 = color[val[0]];
							b2 = color[val[1]];
							b3 = color[val[2]];
						}
						else if(color[val[0]] == b1)
						{
							if(color[val[1]] < b2)
							{
								b1 = color[val[0]];
								b2 = color[val[1]];
								b3 = color[val[2]];
							}
							else if(color[val[1]] == b2)
							{
								if(color[val[2]] < b3)
								{
									b1 = color[val[0]];
									b2 = color[val[1]];
									b3 = color[val[2]];
									
								}
							}
						}
						
					}
					else if(sum < maxim)
					{
						b1 = color[val[0]];
						b2 = color[val[1]];
						b3 = color[val[2]];
						maxim = sum;
						flag = false;
						
						o2t = abs(b1 - b2);
						t2t = abs(b2 - b3);
						diff = (o2t + t2t);
					}
					
				}
			}
		}while(next_permutation(val, val + 3));
		
		printf("%c%c%c %d\n", b1, b2, b3, maxim);
	}
	return 0;
}
