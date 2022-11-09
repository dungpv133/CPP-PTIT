#include <bits/stdc++.h>
using namespace std;
long long n, k;
long long a[100];

void solve()
{
	while(n > 2)
	{
		if(k <= a[n - 2])
		{
			n -= 2;
		}
		else
		{	
			k -= a[n - 2];
			n -= 1;
		}
	}
	if(n == 1)
	{
		cout << "A" << endl;
	}
	else
	{
		cout << "B" << endl;
	}
}
int main()
{
	int test;
	cin >> test;
	a[1] = 1;
	a[2] = 1;
	for(int i = 3; i < 93; i++)
	{
		a[i] = a[i - 2] + a[i - 1];
	}
	while(test--)
	{
		cin >> n >> k;
		solve();
	}
	return 0;
}
