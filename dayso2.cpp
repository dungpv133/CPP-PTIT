#include <bits/stdc++.h>
using namespace std;
vector <vector <int> > res;
vector <int> temp;

void solve(int a[], int n)
{
	for(int i = 0; i < n; i++)
	{
		temp.push_back(a[i]);
	}
	res.push_back(temp);
	temp.clear();
	while(n > 1)
	{
		for(int i = 0; i < n - 1; i++)
		{
			a[i] += a[i + 1];
			temp.push_back(a[i]);
		}
	res.push_back(temp);
	temp.clear();
	n--;
	}
}
void result()
{
	for(int i = res.size() - 1; i >= 0; i--)
	{
		cout << "[";
		for(int j = 0; j < res[i].size(); j++)
		{
			cout << res[i][j];
			if(j != res[i].size() - 1)
			{
				cout << " ";
			}
		}
		cout << "] ";
	}
	cout << endl;
	res.clear();
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
		solve(a, n);
		result();
	}
	return 0;
}
