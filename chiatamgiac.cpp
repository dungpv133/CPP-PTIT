#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n, h;
		cin >> n >> h;
		double s = (float)h / 2;
		double s1 = s / n;
		double temp = sqrt(s1 * h * 2);
		for(int i = 1; i < n; i++)
		{
			double res = sqrt(i) * temp;
			cout << fixed << setprecision(6) << res << " ";
		}
		cout << endl;
	}
	return 0;
}
