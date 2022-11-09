#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int n;
	stack <int> res;
	while(cin >> s)
	{
		if(s == "push")
		{
			cin >> n;
			res.push(n);
		}
		else if(s == "pop")
		{
			res.pop();
		}
		else if(s == "show")
		{
			vector <int> rev;
			if(res.empty())
			{
				cout << "empty" << endl;
				continue;
			}
			while(!res.empty())
			{
				rev.push_back(res.top());
				res.pop();
			}
			reverse(rev.begin(), rev.end());
			for(int i = 0; i < rev.size(); i++)
			{
				cout << rev[i] << " ";
				res.push(rev[i]);
			}
			rev.clear();
			cout << endl;
		}
	}
	return 0;
}
