#include <bits/stdc++.h>
using namespace std;

struct num
{
	int x, y;
};
bool cmp(num a, num b)
{
	return a.x < b.x;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		num arr[n + 9];
		int d[n + 9];
		for(int i = 1; i <= n; i++)
		{
			cin >> arr[i].x >> arr[i].y;
			d[i] = 1;
		}
		sort(arr + 1, arr + n + 1, cmp);
		for(int i = 1; i <= n; i++)
		{
			for(int j = 1; j < i; j++)
			{
				if(arr[i].x > arr[j].y)
				{
					d[i] = max(d[i], d[j] + 1);
				}
			}
		}
		cout << d[n] << endl;
	}
	return 0;
}
