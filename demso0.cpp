#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test, n, a[1009];
	cin >> test;
	while(test--)
	{
		cin >> n;
		int d;
		bool check = false;
		for(int i = 1; i <= n; i++)
		{
			cin >> a[i];
			if(a[i] && !check)
			{
				d = i - 1;
				check = true;
			}
		}
		if(!check)
		{
			cout << n << endl;
			continue;
		}
		cout << d << endl;
	}
	return 0;
}
