#include <bits/stdc++.h>
using namespace std;

int main(){
	int test, k, n;
	cin >> test;
	while(test--){
		cin >> n >> k;
		long a[n + 5];
		for(int i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n, std :: less <int>());
		cout << a[k - 1] << endl;
	}
}
