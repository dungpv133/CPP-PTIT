#include <bits/stdc++.h>
using namespace std;

int main(){
	int test;
	long long x, y, p;
	cin >> test;
	while(test--){
		cin >> x >> y >> p;
		long long res = x % p;
		for(long long i = 1; i < y; i++){
			res = res * (x % p) % p;
		}
		cout << res << endl;
	}
	return 0;
}
