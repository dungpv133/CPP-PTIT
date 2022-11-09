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
		stack <int> nx;
		for(int i = s.size() - 1; i >= 0; i--)
		{
			if(s[i] >= '0' && s[i] <= '9')
			{
				nx.push(s[i] - '0');
			}
			else
			{
				int temp1 = nx.top();
				nx.pop();
				int temp2 = nx.top();
				nx.pop();
				int temp3;
				if(s[i] == '+')
				{
					temp3 = temp1 + temp2;
				}
				else if(s[i] == '-')
				{
					temp3 = temp1 - temp2;
				}
				else if(s[i] == '*')
				{
					temp3 = temp1 * temp2;
				}
				else if(s[i] == '/')
				{
					temp3 = temp1 / temp2;
				}
				nx.push(temp3);
			}
		}
		cout << nx.top() << endl;
	}
	return 0;
}
