#include <bits/stdc++.h>
using namespace std;

int solve(int a, int b, int c, int k)
{
	if(k == 1)
	{
		return 1;
	}
	else if(k == 2)
	{
		return 4;
	}
	
	else
	{
		if(k <= a)
		{
			return ((k - 1) * 3 + 1);
		}
		else if(k > a && k <= b)
		{
			return (a + (k - 1) * 2 + 1);
		}
		else
		{
			return (a + b + k);
		}	
	}
}
int main()
{
	int a, b, c, k;
	cin >> a >> b >> c >> k;
	int arr[5];
	arr[0] = a; arr[1] = b; arr[2] = c;
	sort(arr, arr + 3);
	int s = solve(arr[0], arr[1], arr[2], k);
	cout << s << endl;
	return 0;
}
