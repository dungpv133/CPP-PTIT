#include <bits/stdc++.h>
using namespace std;
int n, a[1009][1009];

int main()
{
	cin >> n;
	memset(a, 0, sizeof(a));
	for(int i = 1; i <= n; i++)
	{
		string s;
		cin >> s;
		int j = s.size() - 1;
		while(j >= 0)
		{
			if(s[j] != ' ')
			{
				int cot = 0;
				while(s[j] != ' ')
				{
					int temp = (int)(s[j] - '0');
					cot = cot * 10 + temp;
					j--;
				}
				a[i][cot] = 1;
			}
		}
	}
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= n; j++)
		{
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
