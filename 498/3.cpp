#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n,m,k,a[200010];
	cin>>n;
	for(int i=0;i<n;i++)
		cin >>a[i];
	if(n<=1)
	{
		cout<<0<<endl;
		return 0;
	}
	int i=0,j=n-1;
	long long int sum1=a[i];
	long long int sum2=a[j];
	long long int max=-1;
	while(i<j)
	{
		if(sum1==sum2)
		{
			max=sum1;
			i++;j--;
			sum1+=a[i];
			sum2+=a[j];
		}
		else if(sum1>sum2)
		{
			j--;
			sum2+=a[j];
		}
		else
		{
			i++;
			sum1+=a[i];
		}
	}
	if(max>=0)
		cout<<max<<endl;
	else
		cout <<0<<endl;
	return 0;

}