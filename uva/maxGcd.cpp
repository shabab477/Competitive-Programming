#include<cstdio>
#include<cstring>
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
    int r;
    while(b!=0)
    {
        r=a%b;
        a=b;
        b=r;
    }
    return a;
}
int main()
{
    int n,a[200]={0},i,j,max=-1,l,len,flag,g;
    char s[100096];
    scanf("%d",&n);
    getchar();
    while(n--)
    {
        j=-1;
        max=-1;
        flag=1;
        fgets(s,100096,stdin);
        for(i=0;i<=strlen(s)-1;i++)
        {
            if(s[i]==' ')
            {
                flag=1;
                continue;
            }
            if((flag==1)||(i==strlen(s)-1))
            {
                a[++j]=0;
                flag=0;
                for(len=j-2;len>=0;len--)
                {
                    g=gcd(a[j-1],a[len]);
                    if(g>max)
                        max=g;
                }
            }
            if(i<strlen(s)-1)
            {
                l=s[i]-48;
                a[j]=(10*a[j])+l;
            }
        }
        printf("%d\n",max);
    }
    return 0;
}