#include <bits/stdc++.h>
using namespace std;
long long money[39], n, s;
bool check;

void init()
{
	cin >> n >> s;
	for(long long i = 0; i < n; i++)
	{
		cin >> money[i];
	}
	sort(money, money + n);
}
void solve(long long sum, long long pos, long long dem)
{
		while(money[pos] <= sum)
		{
			dem++;
			sum -= money[pos];
		}
	if(sum == 0)
	{
		cout << dem << endl;
		return;
	}
	else if(pos == 0 && sum > 0)
	{
		cout << "-1" << endl;
		return;
	}
	else
	{
		solve(sum, pos - 1, dem);
	}
}
int main()
{
	int test = 1;
	while(test--)
	{
		init();
		solve(s, n - 1, 0);
	}
	return 0;
}
