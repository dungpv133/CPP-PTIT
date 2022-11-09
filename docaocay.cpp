#include<bits/stdc++.h>
using namespace std;
#define pb push_back
vector<vector<int> > res;
vector<int> cnt, chuaxet;
 
void DFS(int u){
	chuaxet[u] = true;
	for(auto x: res[u]){
		if(chuaxet[x]) continue;
		cnt[x] = cnt[u] + 1;
		DFS(x);
	}
}
void xuly(){
 
	int n;
	cin >> n;
	res.clear();
	res.resize(n + 1);
	cnt.assign(n + 1, 0);
	chuaxet.assign(n + 1, 0);
	for(int i=1;i<=n-1;i++)
	{
		int x, y;
		cin >> x >> y;
		res[x].pb(y);
		res[y].pb(x);
 	}
 	int ans = 0;
 	cnt[1] = 1;
 	DFS(1);
 for(int i=1;i<=n;i++) ans = max(ans, cnt[i]);
 	cout << ans - 1 << endl;
 
}
  main(){
	int t;cin>>t;
	while(t--)
	{
		xuly();
	}
		
}
