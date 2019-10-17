#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	int n,m,k,a[100010];
	char c[100010];
	vector<int> v;
	cin>>n;

	for(int i=0;i<n;i++)
	{
		cin >>a[i];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			a[i]-=1;
		}
		cout <<a[i] <<" ";
	}
	cout<<endl;

	return 0;
}