#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		string m;
		cin >> m;
		int sz = m.size();
		if(m[0] == '0')
		{
			cout << "0\n";
			continue;
		}
		int f[sz + 9];
		memset(f, 0, sizeof(f));
		f[0] = f[1] = 1;
		for(int i = 2; i <= sz; i++)
		{
			if(m[i - 1] > '0')
			{
				f[i] = f[i - 1];
			}
			if(m[i - 2] == '1' || m[i - 2] == '2' && m[i - 1] < '7')
			{
				f[i] += f[i - 2];
			}
		}
		cout << f[sz] << endl;
	}
	return 0;
}
