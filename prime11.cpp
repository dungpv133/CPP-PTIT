#include <bits/stdc++.h>
using namespace std;

bool check(unsigned long long n){
	if(n == 6 || n == 28 || n == 496 || n == 8128 || n == 33550336 || n == 8589869056 || n == 137438691328){
		return true;
	}
	return false;
}
int main(){
	int test;
	unsigned long long n;
	cin >> test;
	while(test--){
		cin >> n;
		if(check(n)){
			cout << "1\n";
		}
		else if(!check(n)){
			cout << "0\n";
		}
	}
	return 0;
}
