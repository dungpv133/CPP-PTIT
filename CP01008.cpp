#include <bits/stdc++.h>
using namespace std;

int main(){
	int test;
	cin >> test;
	while(test--){
		int n, d;
		cin >> n >> d;
		int a[n + 9];
		for(int i = 0; i < n; i++)
		{
			cin >> a[i];
		}
		for(int i = d; i < n; i++)
		{
			cout << a[i] << " ";
		}
		for(int i = 0; i < d; i++)
		{
			cout << a[i] << " ";
		}
		cout << endl;
	}
	return 0;
}