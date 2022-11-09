#include <bits/stdc++.h>
using namespace std;
long long m = 1e9 + 7;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		long long n;
		cin >> n;
		priority_queue < long long, vector < long long >, greater < long long > > day;
		for(long long i = 0; i < n; i++)
		{
			long long temp;
			cin >> temp;
			day.push(temp);
		}
		long long sum = 0;
		while(day.size() > 1)
		{
			long long a = day.top();
			day.pop();
			long long b = day.top();
			day.pop();
			long long temp = (a + b) % m;
			day.push(temp);
			sum = (sum + temp) % m;
		}
		cout << sum << endl;
	}
	return 0;
}
