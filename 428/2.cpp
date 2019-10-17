#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,w,a[100000];
	cin >>n >>k;
	int count=0;
	int sum1=2*n;
	int sum2=4*n;
	int sum3=2*n;
	for(int i=0;i<k;i++)
	{
		cin >>a[i];	
	}

	for(int i=0;i<k;i++)
	{
		if(a[i]-(a[i])%4<=sum2)
		{
			sum2=sum2-a[i]+(a[i])%4;
			a[i]=a[i]%4;
		}
		else
		{
			a[i]-=sum2;
			break;			
		}
	}
	if(sum2!=0)
	{
		for(int i=0;i<n;i++)
		{
			if(a[i]%3==0)
			{
				sum2-=4;
				a[i]=0;
			}
			if(a[i]%2==0)
			{
				sum2-=
			}
		}
	}
	for(int i=0;i<k;i++)
	{
		if(a[i]-(a[i])%2<=sum1)
		{
			sum1=sum1-a[i]+(a[i])%2;
			a[i]=a[i]%2;
		}
		else
		{
			a[i]-=sum1;
		}
	}
	for(int i=0;i<k;i++)
	{
		if(a[i]-(a[i])%2<=sum3)
		{
			sum3=sum3-a[i]+(a[i])%2;
			a[i]=a[i]%2;
		}
		else
		{
			a[i]-=sum3;
		}		
	}
	int sum=sum1+sum2+sum3;
	for(int i=0;i<k;i++)
	{
		sum=sum-(a[i]+a[i]%2);
		a[i]=a[i]%2;
		if(a[i]>0)
			sum-=2;
	}
	if(sum<0)
		cout <<"NO\n";
	else
		cout <<"YES\n";
	return 0;
}