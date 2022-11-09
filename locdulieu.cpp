#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	test = 1;
	while(test--)
	{
		int n;
		cin >> n;
		int a[n + 9];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		sort(a, a + n);
		for(int i = 0; i < n; i++)
		{
			int pos = i + 1;
			while(a[i] == a[pos])
			{
				a[pos] = -1;
				pos++;
			}
			if(a[i] != -1)
				cout << a[i] << " ";
		}
	}
	return 0;
}
