#include <bits/stdc++.h>
using namespace std;

long long mu(int n)
{
	if(n == 0)
		return 1;
	if(n == 1)
		return 2;
	long long temp = mu(n / 2);
	if(n % 2)
		return temp * temp * 2;
			return temp * temp;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n;
		long long k;
		cin >> n >> k;
		long long dai = mu(n) / 2;
		while(1)
		{
			if(n == 1)
			{
				cout << "1\n";
				break;
			}
			if(dai == k)
			{
				cout << n << endl;
				break;
			}
			if(k > dai)
			{
				k = dai - (k - dai);
			}
			n--;
			dai /= 2;
		}
	}
	return 0;
}
