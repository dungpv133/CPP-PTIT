#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long n;
		cin >> n;
		long long a[n + 9];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		long long b[n + 9];
		for(int i = 0; i < n; i++)
		{
			int temp = -1;
			for(int j = i + 1; j < n; j++)
			{
				if(a[i] < a[j])
				{
					temp = a[j];
					break;
				}
			}
			b[i] = temp;
		}
		for(int i = 0; i < n; i++)
		{
			cout << b[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
