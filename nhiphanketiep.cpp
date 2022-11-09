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
		fflush(stdin);
		int pos = s.size() - 1;
		while(pos >= 0 && s[pos] == '1')
		{
			s[pos] = '0';
			pos--;
		}
		if(pos >= 0)
		{
			s[pos] = '1';
		}
		else
		{
			s = s + '0';
		}
		cout << s << endl;
	}
	return 0;
}
