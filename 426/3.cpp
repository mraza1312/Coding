#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[100000]={0};
	int b[100000]={0},t=0;
	for(int i=2;i<100000;i++)
	{
		if(a[i]==0)
		{
			b[t++]=i;
			for(int j=2*i;j<100000;j=j+i)
			{
				a[j]=1;
			}
		}
	}
	int x,y,p1[100000]={0},p2[100000]={0};
	cin >>x>>y;
	for(int i=0;b[i]<=sqrt(x);i++)
	{
		if(x%b[i]==0)
		{
			while(x%b[i]==0)
			{
				p1[b[i]]++;
			}
		}
	}	
	for(int i=0;b[i]<=sqrt(y);i++)
	{
		if(y%b[i]==0)
		{
			while(y%b[i]==0)
			{
				p2[b[i]]++;
			}
		}
	}
	for(int i=0;i<=max(sqrt(y),sqrt(x));i++)
	{
		
	}
}