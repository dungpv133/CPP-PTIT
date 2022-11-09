#include <bits/stdc++.h>
using namespace std;

struct vat
{
	int a, c;
	double d;
};
bool cmp(vat x, vat y)
{
	return x.d > y.d;
}
int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		int n, w;
		cin >> n >> w;
		vat arr[n + 9];
		for(int i = 1; i <= n; i++)
		{
			cin >> arr[i].c >> arr[i].a;
			arr[i].d = (double)arr[i].c / (double)arr[i].a;
		}
		sort(arr + 1, arr + 1 + n, cmp);
		double sum = 0;
		int j = 1;
		while(w > 0)
		{
			if(arr[j].a <= w)
			{
				sum += arr[j].a * (double)arr[j].d;
				w -= arr[j].a;
			}
			else if(arr[j].a > w)
			{
				sum += arr[j].d * w;
				w = 0;
			}
			j++;
		}
		printf("%.2f \n", sum);
	}
	return 0;
}
