#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	cin.ignore();
	while(test--)
	{
		string s;
		getline(cin, s);
		bool kt;
		stack <char> bt;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] != ')')
			{
				bt.push(s[i]);
			}
			else
			{
				kt = true;
				char temp = bt.top();
				bt.pop();
				while(temp != '(')
				{
					if(temp == '+' || temp == '-' || temp == '*' || temp == '/')
					{
						kt = false;
					}
					temp = bt.top();
					bt.pop();
				}
				if(kt)
				{
					break;
				}
			}
		}
		if(kt)
		{
			cout << "Yes";
		}
		else
		{
			cout << "No";
		}
		cout << endl;
	}
	return 0;
}
