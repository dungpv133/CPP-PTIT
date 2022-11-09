#include <bits/stdc++.h>
using namespace std;

int main(){
	int test;
	long n;
	cin >> test;
	while(test--){
		cin >> n;
		long a[n + 5];
		for(long i = 0; i < n; i++){
			cin >> a[i];
		}
		sort(a, a + n, std :: less <long>());
		cout << a[n - 1] << endl;
	}
}
