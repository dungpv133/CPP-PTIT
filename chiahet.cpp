#include <bits/stdc++.h>
using namespace std;

void divide(int n, int k)
{
	bool check = false;
	for(int i = 2; i <= n; i++)
	{
		int temp = i;
		while(temp % 2 == 0)
		{
			k--;
			temp /= 2;
			if(k == 0)
			{
				check = true;
				break;
			}
		}
	}
	if(check)
	{
		cout << "Yes\n";
	}
	else
	{
		cout << "No\n";
	}
}
int main()
{
	int n, k;
	cin >> n >> k;
	divide(n, k);
	return 0;
}
