#include <bits/stdc++.h>
using namespace std;
int *max1;

void findmax(int &max2, int a)
{
	if(a > max2)
	{
		max2 = a;
	}
}
int main()
{
	int n;
	cin >> n;
	int arr[n + 9];
	max1 = &arr[0];
	for(int i = 0; i < n; i++)
	{
		cin >> arr[i];
		findmax(*max1, arr[i]);
	}
	cout << *max1 << endl;
	return 0;
}
