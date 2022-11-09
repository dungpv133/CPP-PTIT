#include<bits/stdc++.h>
using namespace std;
int vitri(int a[],int n,int x)
{
	for(int i=0;i<n;i++)
	if(a[i]==x) return i;
	return -1;
}
void xuly(int a[],int n,int b[])
{
	int i=vitri(a,n,b[0]);
	if(i!=0) xuly(a,i,b+1);
	if(i!=n-1) xuly(a+i+1,n-1-i,b+i+1);
	cout<<b[0]<<" ";
}
main()
{
	int t;cin>>t;
	while(t--)
	{
		int n;cin>>n;
		int a[n],b[n];
		for(int i=0;i<n;i++) cin>>a[i];
		for(int i=0;i<n;i++) cin>>b[i];
		xuly(a,n,b);
		cout<<endl;
		
	}
}
