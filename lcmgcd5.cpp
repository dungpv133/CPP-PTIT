#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll ucln(ll a, ll b){
	long temp;
	while(b != 0){
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
int main(){
	int test;
	ll a, x, y;
	cin >> test;
	while(test--){
		cin >> a >> x >> y;
		ll ans = ucln(x, y);
		while(ans--){
			cout << a;
		}
		cout << endl;
	}
	return 0;
}
