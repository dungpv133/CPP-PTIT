#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		string s;
		cin >> n;
		cin >> s;
		int a[n + 9][n + 9];
		memset(a, 0, sizeof(a));
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j <= n; j++)
			{
				if(s[i - 1] == s[j - 1] && i != j)
				{
					a[i][j] = a[i - 1][j - 1] + 1;
				}
				else
				{
					a[i][j] = max(a[i][j - 1], a[i - 1][j]);
				}
			}
		}
		cout << a[n][n] << endl;
	}
	return 0;
}
