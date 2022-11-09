#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >>test;
	while(test--)
	{
		string s;
		cin >> s;
		stack <char> nganxep;
		for(int i = 0; i < s.size(); i++)
		{
			if(s[i] == '(' || (s[i] == ')' && nganxep.empty()))
			{
				nganxep.push(s[i]);
			}
			else if(s[i] == ')')
			{
				if(!nganxep.empty() && nganxep.top() == '(')
				{
					nganxep.pop();
				}
				else
				{
					nganxep.push(s[i]);
				}
			}
		}
		int m = 0, d = 0;
		while(!nganxep.empty())
		{
			if(nganxep.top() == ')')
			{
				d++;
			}
			else
			{
				m++;
			}
			nganxep.pop();
		}
		int kq = m / 2 + d / 2 + m % 2 + d % 2;
		cout << kq << endl;
	}
	return 0;
}
