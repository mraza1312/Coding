#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	char s1,s2;
	cin >> s1>>s2;
	cin >>n;
	char a[4];
	a[0]='^';
	a[1]='>';
	a[2]='v';
	a[3]='<';
	n=n%4;
	int i1,i2;
	int flag1=0,flag2=0;
	// cout <<"s1: "<<s1<<s2<<endl;
	for(int i=0;i<=3;i++)
	{

		if(s1==a[i])
			i1=i;
		if(s2==a[i])
			i2=i;
	}
	// cout <<"flag1: " <<i1 <<" flag2: " <<i2 <<"\n";

	if(a[(i1+n)%4]==s2)
		flag1=1;
	if(a[(i2+n)%4]==s1)
		flag2=1;
	if(flag1==1 && flag2==0)
		cout <<"cw";
	else if(flag1==0 && flag2==1)
		cout <<"ccw\n";
	else
		cout <<"undefined\n";
	return 0;
}