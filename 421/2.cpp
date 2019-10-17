#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a;
	cin >>n>>a;
	double r=((n-2)*180)/n;
	if(n-3>0)
		r=180/n;
	int end=n;
	double min=abs(a-r),t;
	int count=1;
	// cout <<r <<"\n";
	for(int i=n;i>=3;i--)
	{
		t=abs(a-(count*r));
		// cout <<t <<"  min: "<<min <<"\n";
		if(min>t)
		{
			min=t;
			end=i;
		}
		count++;
	}
	cout <<"1 2 " <<end <<"\n";
}