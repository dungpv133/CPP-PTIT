#include <bits/stdc++.h>
using namespace std;

long sum(long n){
	if(n < 10)
		return n;
	long temp = 0;
	while(n > 0){
		temp += n % 10;
		n /= 10;
	}
	if(temp < 10)
		return temp;
	return sum(temp);
}
int main(){
	int test;
	cin >> test;
	long n;
	while(test--){
		cin >> n;
		cout << sum(n) << endl;
	}
	return 0;
}
