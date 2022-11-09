#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		string s;
		cin >> s;
		int sz = s.size();
		stack <int> nx;
		int res = 0;
		nx.push(-1);
		for(int i = 0; i < sz; i++)
		{
			if(s[i] == '(')
			{
				nx.push(i);
			}
			else
			{
				nx.pop();
				if(!nx.empty())
				{
					res = max(res, i - nx.top());
				}
				if(nx.empty())
				{
					nx.push(i);
				}
			}
		}
		cout << res << endl;
	}
	return 0;
}
