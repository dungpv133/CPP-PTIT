#include<bits/stdc++.h>
using namespace std;
vector<string> a;
vector<string>b;
main()
{
	int t;cin>>t;
	while(t--)
	{
		int n,m;
		cin>>n;
		for(int i=0;i<3*n;i++)
		{
			string k;cin>>k;
			a.push_back(k);
		}
		cin>>m;
		int dem=0;
		for(int i=0;i<3*m;i++)
		{
			string k;cin>>k;
			b.push_back(k);
		}
		if(n!=m) 
		{
			cout<<0<<endl;
			break;
		}
		
		else
		{
			for(int i=0;i<a.size();i++) 
			{
				if(a[i]!=b[i])
				{
					cout<<"0"<<endl;
					dem++;
					break;
				}
			}
		}
		if(dem==0) cout<<1<<endl;
		
	}
}
