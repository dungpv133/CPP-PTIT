#include <bits/stdc++.h>
using namespace std;
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		
		long long m, n, k;
		cin >> m >> n >> k;
		vector <int> res(m + n);
		for(int i = 0; i < m + n; i++)
		{
			cin >> res[i];
		}
		sort(res.begin(), res.end());
		cout << res[k - 1] << endl;
	}
	return 0;
}
