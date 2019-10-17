#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,k,a[1000];
	cin >> n >>k;
	long long int sum=0;
	for(int i=0;i<n;i++)
	{
		cin >>a[i];
	}
	long long int count=0;
	long long int sum2=0;
	for(int i=0;i<n;i++)
	{
		if(sum2>=k)
		{
			break;
		}

		sum+=a[i];
		if(sum>=8)
		{
			sum2+=8;
			sum-=8;
			count++;
		}
		else
		{
			sum2+=sum;
			sum=0;
			count++;
		}

	}
	if(sum2<k)
		cout <<"-1\n";
	else
		cout <<count <<"\n";
	return 0;
}