#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n, k;
		cin >> n >> k;
		int a[n + 9];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		long long count = 0;
		for(int i = 0; i < n - 1; i++)
		{
			for(int j = n - 1; j > i; j--)
			{
				if(a[i] + a[j] == k)
				{
					count++;
				}
				else if(a[i] + a[j] < k)
				{
					break;
				}
			}
		}
		cout << count << endl;
	}
	return 0;
}
