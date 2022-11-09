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
		for(int i = 0; i < n; i++)
		{
			if(a[i] == -1)
			{
				continue;
			}
			else
			{
				for(int j = i + 1; j < n; j++)
				{
					if(a[i] == a[j])
					{
						a[j] = -1;
					}
				}
				cout << a[i] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}
