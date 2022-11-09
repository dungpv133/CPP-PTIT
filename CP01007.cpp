#include <bits/stdc++.h>
using namespace std;

bool bigger(int temp, int a[], int n, int pos)
{
	for(int i = pos + 1; i < n; i++)
	{
		if(temp < a[i])
		{
			return false;
		}
	}
	return true;
}
bool check(int x, int y)
{
	return (x > y);
}
int main()
{
	int t, n;
	cin >> t;
	while(t--)
	{
		cin >> n;
		int a[n + 9];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		int size = 0;
		int kq[n + 9];
		for(int i = 0; i < n; i++)
		{
			if(bigger(a[i], a, n, i))
			{
				kq[size] = a[i];
				size++;
			}
		}
		sort(kq, kq + size, check);
		for(int i = 0; i < size; i++)
		{
			cout << kq[i] << " ";
		}
		cout << endl;
	}
	return 0;
}
