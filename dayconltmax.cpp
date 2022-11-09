// Phan Viet Dung B19DCCN133 //


#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;
	bool check = false;
	while(test--)
	{
		int a[109], n;
		cin >> n;
		int Max;
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
			if(i == 0)
			{
				Max = a[0];
			}
			if(a[i] > 0)
			{
				check = true;
			}
			else
			{
				if(Max < a[i])
				{
					Max = a[i];
				}
			}
		}
		if(!check)
		{
			cout << Max << endl;
		}
		else
		{
			int sum = 0, temp = a[0];
			for(int i = 0; i < n; i++)
			{
				if(sum + a[i] < 0)
				{
					sum = 0;
				}
				else
				{
					sum = sum + a[i];
					if(sum > temp)
					{
						temp = sum;
					}
				}
			}
			cout << temp << endl;
		}
	}
}
