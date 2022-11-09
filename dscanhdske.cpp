#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int v, e;
		cin >> v >> e;
		int a[e + 9], b[e + 9];
		for(int i = 0; i < e; i++)
		{
			cin >> a[i] >> b[i];
		}
		for(int i = 1; i <= v; i++)
		{
			cout << i << ": ";
			int j = 0;
			while(a[j] <= i)
			{
				if(a[j] == i)
				{
					cout << b[j] << " ";
				}
				else if(b[j] == i)
				{
					cout << a[j] << " ";
				}
				j++;
			}
			cout << endl;
		}
	}
	return 0;
}
