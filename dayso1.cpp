#include <bits/stdc++.h>
using namespace std;


void solve(int a[], int n)
{
	while(n > 1)
	{
		cout << "[";
		for(int i = 0; i < n - 1; i++)
		{
			a[i] += a[i + 1];
			cout << a[i];
			if(i != n - 2)
			{
				cout << " ";
			}
		}
		cout << "]\n";
	n--;
	}
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		int a[n + 9];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		cout << "[";
		for(int i = 0; i < n; i++)
		{
			cout << a[i];
			if(i != n - 1)
			{
				cout << " ";
			}
		}
		cout << "]\n";
		solve(a, n);
	}
	return 0;
}
