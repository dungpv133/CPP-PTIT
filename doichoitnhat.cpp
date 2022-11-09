#include <bits/stdc++.h>
using namespace std;
int n;

void selection_sort(int a[])
{
	int count = 0;
	for(int i = 0; i < n - 1; i++)
	{
		bool check = false;
		int min = i;
		for(int j = i + 1; j < n; j++)
		{
			if(a[j] < a[min])
			{
				check = true;
				min = j;
			}
		}
		if(check)
		{
			count++;
		}
		int temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	cout << count << endl;
}

int main()
{
	int test;
	cin >> test;
	while(test--)
	{
		cin >> n;
		int a[n + 9];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		selection_sort(a);
		cout << endl;
	}
	return 0;
}
