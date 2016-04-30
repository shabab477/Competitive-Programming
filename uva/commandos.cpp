#include <stdio.h>
#include <string>
#include <string.h>
#include <math.h>
#include <vector>
#include <queue>
using namespace std;

int l1[110];
int l2[110];
int discover[110];
struct node
{

   vector<int> vect;
}array[110];

void clear(int n)
{
    for(int c = 0; c <= n; c++)
    {

        discover[c] = 0;
    }

}

void allClear(int n)
{
    for(int c = 0; c <= n; c++)
    {
        l1[c] = 0;
        l2[c] = 0;
        array[c].vect.clear();
    }


}

void bfs(int start, int arr[])
{
    queue<int> q;
    discover[start] = 1;
    arr[start] = 0;

    q.push(start);

    while(!q.empty())
    {
        int u = q.front();
        q.pop();

        int len = array[u].vect.size();

        for(int c = 0; c < len; c++)
        {
           int v = array[u].vect[c];

           if(discover[v] == 0)
           {

               discover[v] = 1;
               arr[v] = arr[u] + 1;
               q.push(v);
           }
        }
    }
}

int main()
{
    int tc = 0;
    scanf("%d", &tc);
    int cs = 1;
    while(tc--)
    {
        int n = 0;
        scanf("%d", &n);

        allClear(n);
        clear(n);


        int e = 0;
        scanf("%d", &e);

        for(int c = 0; c < e; c++)
        {
            int from, to = 0;
            scanf("%d %d", &from, &to);

            array[from].vect.push_back(to);
            array[to].vect.push_back(from);

        }

        int start, end = 0;
        scanf("%d %d", &start, &end);

        bfs(start, l1);
        clear(n);
        bfs(end, l2);

        int maxim = -1;
        for(int c = 0; c < n; c++)
        {
            int sum = l1[c] + l2[c];
            if(sum > maxim)
            {

                maxim = sum;
            }
        }


        printf("Case %d: %d\n", cs++, maxim);
        allClear(n);
    }

    return 0;
}
