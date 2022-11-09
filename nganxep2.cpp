#include <bits/stdc++.h>
using namespace std;

int main()
{
	string s;
	int n;
	stack <int> res;
	int q;
	cin >> q;
	while(q--)
	{
		cin >> s;
		if(s == "PUSH")
		{
			cin >> n;
			res.push(n);
		}
		else if(s == "PRINT")
		{
			if(res.empty())
			{
				cout << "NONE" << endl;
			}
			else
			{
				cout << res.top() << endl;
			}
		}
		else if(s == "POP" && res.size() > 0)
		{
			res.pop();
		}
	}
	return 0;
}
