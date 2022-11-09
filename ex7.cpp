#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		int a[n + 9];
		bool check = false;
		int pos;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(a[i] == 1 && !check)
			{
				check = true;
				pos = i;
			}
		}
		if(!check)
		{
			cout << n << endl;
			continue;
		}
		else
		{
			cout << pos << endl;
		}
	}
	return 0;
}
