#include <bits/stdc++.h>
using namespace std;
int main()
{
	int l,r,x,y;
	int k;
	cin >>l >>r >>x >>y>>k;
	if(k>=(double)l/(double)y && k<=(double)r/(double)x)
		printf("YES\n");
	else
		printf("NO\n");
	return 0;
}