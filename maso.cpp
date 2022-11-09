#include <bits/stdc++.h>
using namespace std;
int n, a[10], b[10];
int xet[10];

void result1()
{
	for(int i = 1; i <= n; i++)
	{
		cout << b[i];
	}
	cout << endl;
}
void result()
{
	
	for(int i = 1; i <= n; i++)
	{
		char chu = a[i] + 64;
		cout << chu;
	}
	
	cout << endl;
}
void init()
{
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		a[i] = i;
		b[i] = 1;
		xet[i] = 1;
	}
}
void solve(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(xet[j])
		{
			a[i] = j;
			xet[j] = 0;
			if(i == n)
				result();
			else
				solve(i + 1);
			xet[j] = 1;
		}
	}
}
void solve1(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(1)
		{
			b[i] = j;
			if(i == n)
				result1();
			else
				solve(i + 1);
		}
	}
}
int main()
{
	init();
	solve(1);
}
