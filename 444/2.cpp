#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int a[100][100];
	int b[10]={0};
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<6;j++)
		{
			int k;
			cin >>k;
			a[i][j]=k;
			b[k]++;
		}
	}
	// pair<int, int> p;
	vector< pair <int,int> > p;
	for(int i=0;i<10;i++)
	{
		p.push_back(make_pair(b[i],i));
	}
	sort(p.begin(),p.end());
	int sum=0;
	for(int i=0;i<10;i++)
	{
		// cout <<p[i].second<< " "<<p[i].first <<endl;
		if(p[0].second!=0)
		{
			int t=p[i].first+1;
			int y=1;
			while(t)
			{
				sum+=p[i].second*y;
				// cout <<"sum: "<<sum<<endl;
				y*=10;
				t--;
			}
			sum--;
			break;
		}
		else
		{
			int t=p[0].first+1;
			int y=1;
			int sum1=0;
			while(t)
			{
				sum1+=p[i].second*y;
				
				y*=10;
				t--;
			}
			// cout <<"p9: "<<p[9].second<<endl;
			
			sum1+=p[1].second*y;
			// cout <<"sum1: "<<sum1<<endl;
			sum1--;		

			t=p[1].first+1;
			y=1;
			int sum2=0;
			while(t)
			{
				sum2+=p[1].second*y;
				// cout <<"sum2: "<<sum2<<endl;
				y*=10;
				t--;
			}
			sum2--;	
			sum=min(sum1,sum2);
			break;
		}
	}
	cout <<sum<<endl;
	
	return 0;
}