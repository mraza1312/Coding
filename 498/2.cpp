#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int n,m,k,a[100010];
	char c[100010];
	vector<int> v;
	cin>>n>>k;
	vector<pair<int,int > > r;

	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		r.push_back(make_pair(a[i],i));
	}

	sort(a,a+n);
	sort(r.begin(),r.end());

	int sum=0;
	for(int i=n-1;i>=n-k;i--)
	{
		sum+=a[i];
		v.push_back(r[i].second);
		// printf("%d\n",r[i].second );
	}
	// printf("---------------\n");
	sort(v.begin(),v.end());
	cout <<sum <<endl;
	int t=v.size();
	sum=0;
	for(int i=0;i<t;i++)
	{
		if(i==t-1)
			cout <<n-sum<<" ";
		else if(i==0)
		{
			cout <<v[i]+1<<" ";
			sum+=v[i]+1;
		}
		else
		{	
			cout <<v[i]-v[i-1]<<" ";
			sum+=v[i]-v[i-1];
		}
	}
	cout <<endl;
	return 0;

}