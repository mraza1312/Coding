#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a[100]={0};
	for(int i=1;i<=24;i++)
		cin >>a[i];

		if(a[13]==a[14] &&a[14]==a[15] && a[15]==a[16] && a[17]==a[18] && a[17]==a[19] && a[17]==a[20])
		{
			// cout<<"1"<<endl;
			if(a[2]==a[4] &&a[5]==a[7] && a[1]==a[3] && a[6]==a[8] && a[9]==a[11] && a[10]==a[12]&&a[21]==a[23] && a[22]==a[24])
			{
				// cout<<"2"<<endl;
				if(a[1]==a[6] && a[5]==a[10] && a[9]==a[21] && a[22]==a[2])
				{

					cout<<"YES"<<endl;
					return 0;
				}
				else if(a[6]==a[9] && a[2]==a[5] && a[10]==a[22] && a[1]==a[21])
				{
					cout <<"YES"<<endl;
					return 0;
				}
			}
		else if(a[1]==a[2]&& a[2]==a[3] && a[3]==a[4] && a[9]==a[10] && a[10]==a[11] && a[11]==a[12])
		{
			if(a[13]==a[14]&& a[15]==a[16] && a[5]==a[6] && a[7]==a[8] && a[17]==a[18] && a[19]==a[20] && a[21]==a[22] && a[23]==a[24])
			{
				if(a[23]==a[17] && a[7]==a[13] && a[19]==a[5] && a[15]==a[21])
				{
					cout <<"YES"<<endl;
					return 0;					
				}
				else if(a[23]==a[13]&& a[5]==a[15] && a[7]==a[17] && a[19]==a[21])
				{
					cout <<"YES"<<endl;
					return 0;
				} 
			}
		}	
	}
	cout<<"NO"<<endl;
	return 0;
}