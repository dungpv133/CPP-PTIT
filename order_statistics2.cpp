#include <bits/stdc++.h>
using namespace std;

int main(){
	int test, n;
	cin >> test;
	while(test--){
		cin >> n;
		long a[n + 5];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n, std :: less <int>());
		cout << a[n - 1] << endl;
	}
}
