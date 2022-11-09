#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n, s, m;
		cin >> n >> s >> m;
		int food = s * m;
		int day = s - s / 7;
		int res = -1;
		for(int i = 1; i <= day; i++)
		{
			int temp = n * i;
			if(temp >= food)
			{
				res = i;
				break;
			}
		}
		cout << res << endl;
	}
	return 0;
}
