#include <bits/stdc++.h>
using namespace std;
int n, dem, a[20];
bool xet[20];
vector <string> res;

void init()
{
	cin >> n;
	memset(xet, 0, sizeof(xet));
	res.clear();
	for(int i = 1; i <= n; i++)
	{
		a[i] = i;
	}
	dem = 0;
}

void solve(int i)
{
	for(int j = 1; j <= n; j++)
	{
		if(!xet[j])
		{
			a[i] = j;
			xet[j] = true;
			if(i == n)
			{
				string s;
				for(int p = 1; p <= n; p++)
				{
					s = s + (char)(a[p] + '0');
				}
				res.push_back(s);
				dem++;
			}
			else
			{
				solve(i + 1);
			}
			xet[j] = false;
		}
	}
}
void result()
{
	cout << dem << endl;
	reverse(res.begin(), res.end());
	for(int i = 0; i < res.size(); i++)
	{
		cout << res[i] << " ";
	}
	cout << endl;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		init();
		solve(1);
		result();
	}
	return 0;
}
