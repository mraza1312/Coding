#include <bits/stdc++.h>
using namespace std;
int main()
{
	int r,d,n;
	cin >> r >>d>>n;
	int count=0;
	int x,y,r1;
	for(int i=0;i<n;i++)
	{
		cin >> x>> y>> r1;
		double t=sqrt(x*x +y*y);
		if(t>=r-d+r1 && t+r1<=r)
			count++;
	}
	printf("%d\n",count );
	return 0;
}