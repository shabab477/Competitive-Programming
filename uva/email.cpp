#include <bits/stdc++.h>
using namespace std;

int n, m, s, t;
int d[20001];


struct Pair
{
	int n, w;
	Pair(int nn, int ww)
	{
		n = nn;
		w = ww;
		
	}
	
	bool operator<(const Pair &a)const
	{
		return (w > a.w);
	}
};

priority_queue<Pair> pq;
vector<Pair> graph[20001];

void djikestra()
{
	d[s] = 0;
	pq.push(Pair(s, 0));
	
	while(!pq.empty())
	{
		
		int u = pq.top().n;
		pq.pop();
		//printf("here %d\n", u);
		int sz = graph[u].size();
		
		for(int c = 0; c < sz; c++)
		{
			
			int v = graph[u][c].n;
			int w = graph[u][c].w;
			
			if(d[v] > d[u] + w)
			{
				
				d[v] = d[u] + w;
				pq.push(Pair(v, d[v]));
			}
		}
	}
}

void clear()
{
	for(int c = 0; c < n; c++)
	{
		graph[c].clear();
		d[c] = 100000;
	}
	
	while(!pq.empty())
	{
		pq.pop();
	}
}

int main() {
	
	int te = 0;
	scanf("%d", &te);
	int test = 1;
	while(te--)
	{
		
		scanf("%d %d %d %d", &n, &m, &s, &t);
		clear();
		for(int c = 0; c < m; c++)
		{
			int from,to, v = 0;
			scanf("%d %d %d",&from, &to, &v);
			graph[from].push_back(Pair(to, v));
			graph[to].push_back(Pair(from, v));
			
			
		}
		
		djikestra();
		//printf("%d %d %d\n", d[0], d[1], d[2]);
		
		if(d[t] == 100000)
		{
			printf("Case #%d: unreachable\n", test);
		}
		else
		{
			printf("Case #%d: %d\n", test, d[t]);
		}
		test++;
	}
	
	return 0;
}
