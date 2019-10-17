#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,k;
	char s[2000000];
	cin >> n>>k;
	scanf("%s",s);

	int a[1000]={0};
	int b[1000]={0};
	int count=0;
	for(int i=0;i<1000;i++)
	{
		a[i]=0;
		b[i]=0;
	}
	for(int i=0;i<n;i++)
		a[(int)s[i]]++;
	int flag=0;
	for(int i=0;i<n;i++)
	{
		// cout <<b[(int)s[i]] <<a[(int)s[i]] <<"\n";
		
		if(b[(int)s[i]]==0)
			count++;

		b[(int)s[i]]++;
		if(b[(int)s[i]]==a[(int)s[i]])
		{
			// cout <<"Aman\n";
			count--;
		}
		// cout <<count <<" ";
		if(count>k)
		{
			flag=1;
			break;
		}
	}


	if(flag==1)
		cout <<"YES\n";
	else
		cout <<"NO\n";
	return 0;
}