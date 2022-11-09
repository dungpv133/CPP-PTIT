#include <bits/stdc++.h>
using namespace std;

int search(int n, int num[], int size)
{
	for(int i = 0; i < size; i++)
	{
		if(num[i] == n)
		{
			return i;
		}
	}
	return -1;
}
int main(){
	int test;
	cin >> test;
	while(test--){
		int n;
		cin >> n;
		int a[n + 9], num[n], f[n];
		int size = 0;
		bool check = false;
		for(int i = 0; i < n; i++){
			cin >> a[i];
			int temp = search(a[i], num, size);
			if(temp == -1)
			{
				num[size] = a[i];
				f[size] = 1;
				size++;
			}
			else
			{
				f[temp]++;
			}
		}
		for(int i = 0; i < size; i++)
		{
			if(f[i] > 1)
			{
				cout << num[i] << endl;
				check = true;
				break;
			}
		}
		if(!check)
		{
			cout << "NO\n";
		}
	}
	return 0;
}
