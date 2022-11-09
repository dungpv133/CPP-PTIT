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
		long long temp;
		priority_queue <long long, vector <long long>, greater <long long> > day;
		for(int i = 0; i < n; i++)
		{
			cin >> temp;
			day.push(temp);
		}
		long long price = 0;
		while(day.size() > 1)
		{
			long long x = day.top();
			day.pop();
			long long y = day.top();
			day.pop();
			day.push(x + y);
			price += x + y;
		}
		cout << price << endl;
	}
	return 0;
}
