#include <bits/stdc++.h>
using namespace std;
string s;
int k, dem[1009];

void init()
{
	cin >> k >> s;
	memset(dem, 0, sizeof(dem));
	for(int i = 0; i < s.size(); i++)
	{
		dem[s[i]]++;
	}
}
void solve()
{
	priority_queue < int, vector <int>, less <int> > hd;
	for(int i = 0; i < s.size(); i++)
	{
		if(dem[s[i]] > 0)
		{
			hd.push(dem[s[i]]);
			dem[s[i]] = 0;
		}
	}
	while(k > 0 && !hd.empty())
	{
		int temp = hd.top();
		hd.pop();
		temp--;
		hd.push(temp);
		k--;
	}
	long long sum = 0;
	while(!hd.empty())
	{
		int temp = hd.top();
		hd.pop();
		sum += temp * temp;
	}
	cout << sum << endl;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		init();
		solve();
	}
	return 0;
}
