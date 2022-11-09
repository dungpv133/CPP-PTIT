#include <bits/stdc++.h>
using namespace std;
int n, m;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		vector <int> i, u;
		cin >> n >> m;
		int a[n + 9], b[m + 9];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			u.push_back(a[i]);
		}
		for(int i = 0; i < m; i++)
		{
			cin >> b[i];
			u.push_back(b[i]);
		}
		sort(u.begin(), u.end());
		for(int i = 0; i < u.size(); i++)
		{
			if(i == 0)
			{
				cout << u[0] << " ";
				continue;
			}
			if(u[i] == u[i - 1])
			{
				continue;
			}
			cout << u[i] << " ";
		}
		cout << endl;
		for(int i = 0; i < u.size(); i++)
		{
			if(u[i] == -1)
			{
				continue;
			}
			int value = u[i];
			int count = 0;
			int j = i;
			while(u[j] == value)
			{
				count++;
				u[j] = -1;
				j++;
			}
			if(count > 1)
			{
				cout << value << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
