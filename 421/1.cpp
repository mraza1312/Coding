#include <bits/stdc++.h>
using namespace std;
int main()
{
	int c,v0,v1,a,l;
	cin >>c >>v0 >>v1 >>a >>l;
	int count=1;
	int sum=v0;
	while(1)
	{
		if(sum>=c)
			break;
		sum=sum-l;
		int t=v0+count*a;
		if(t>v1)
			t=v1;
		sum=sum+t;
		count++;
		// cout <<"sum:" <<sum <<"\n";

	}
	cout <<count <<"\n";
	return 0;

}