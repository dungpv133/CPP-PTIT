#include <bits/stdc++.h>
using namespace std;

int max(int n, int m, int k)
{
	if(n > m && n > k)
	{
		return n;
	}
	else if(m > n && m > k)
	{
		return m;
	}
	else
	{
		return k;
	}
}
bool find(long long x, long long arr[], int size)
{
	for(long long i = 0; i < size; i++)
	{
		if(x == arr[i])
		{
			return true;
		}
	}
	return false;
}
int main()
{
	int t, m, n, k;
	cin >> t;
	while(t--)
	{
		cin >> n >> m >> k;
		long long a[n + 9], b[m + 9], c[k + 9];
		for(long long i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(long long i = 0; i < m; i++)
		{
			cin >> b[i];
		}
		for(long long i = 0; i < k; i++)
		{
			cin >> c[i];
		}
		int size = max(n, m, k);
		long long kq1[size + 9], kq2[size + 9];
		int temp1 = 0, temp2 = 0;
		for(long long i = 0; i < n; i++)
		{
			if(find(a[i], b, m))
			{
				kq1[temp1] = a[i];
				temp1++;
			}
		}
		for(long long i = 0; i < k; i++)
		{
			if(find(c[i], kq1, temp1))
			{
				kq2[temp2] = c[i];
				temp2++;
			}
		}
		if(temp2 == 0)
		{
			cout << "NO\n";
			continue;
		}
		for(long long i = 0; i < temp2; i++)
		{
			cout << kq2[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
