#include <bits/stdc++.h>
using namespace std;
int money[10];

void init()
{
	money[0] = 1;
	money[1] = 2;
	money[2] = 5;
	money[3] = 10;
	money[4] = 20;
	money[5] = 50;
	money[6] = 100;
	money[7] = 200;
	money[8] = 500;
	money[9] = 1000;
}
void solve(int n, int pos, int count)
{
	for(int i = pos; i >= 0; i--)
	{
		if(money[i] <= n)
		{
			count++;
			n -= money[i];
			pos = i;
			break;
		}
	}
	if(n == 0)
	{
		cout << count << endl;
	}
	else
	{
		solve(n, pos, count);
	}
}
int main()
{
	int test;
	init();
	cin >> test;
	while(test--)
	{
		int n;
		cin >> n;
		solve(n, 9, 0);
	}
	return 0;
}
