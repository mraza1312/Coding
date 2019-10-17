#include <bits/stdc++.h>
using namespace std;
int main()
{
	int flag=0;
	string s;
	cin >>s;
	int n=s.size();
	int count=0;
	for(int i=n-1;i>=0;i--)
	{
		if(s[i]=='0')
			count++;
		if(count>=6 && s[i]=='1'-0)
			flag=1;
	}
	if(flag==1)
		cout <<"yes"<<endl;
	else
		cout <<"no"<<endl;

	return 0;
}