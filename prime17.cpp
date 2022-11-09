#include <bits/stdc++.h>
using namespace std;

bool snt(long long n){
	if(n < 2){
		return false;
	}
	for(long long i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			return false;
		}
	}
	return true;
}

int main(){
	int test;
	long long l, r;
	cin >> test;
	while(test--){
		cin >> l >> r;
		if(l > r){
			long long temp = l;
			l = r;
			r = temp;
		}
		long count = 0;
		l = sqrt(l);
		r = sqrt(r);
		for(long long i = l; i <= r; i++){
			if(snt(i)){
				count++;
			}
		}
		cout << count << endl;
	}
	return 0;
}
