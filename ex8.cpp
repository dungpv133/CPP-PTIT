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
		int d[sz + 9];
		d[0] = 1;
		for(int i = 1; i <= sz; i++)
		{
			for(int j = 1; j < i - 1; j++)
			{
				if((s[j - 1] == '1') || (s[j - 1] == '2' && (s[j] >= '0') && s[j] <= '6'))
				{
					d[i] = max(d[i], d[j] + 1);
				}
			}
		}
		cout << d[sz] << endl;
	}
	return 0;
}
