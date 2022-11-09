#include <bits/stdc++.h>
using namespace std;

long long chiadu(string a, long long m){
	long long sum = 0;
	for(long long i = 0; i < a.size(); i++){
		sum = sum * 10 + a[i] - '0';
		if(sum >= m){
			sum = sum % m;
		}
	}
	return sum;
}
long long somu(long long a, long long b, long long m){
	if(b == 0) return 1;
	long long t = somu(a, b/2, m);
	if(b % 2 == 0){
		return ((t % m) * (t % m)) % m;
	}
	else{
		return (((t % m) * (t % m)) * a % m) % m;
	}
}
void solve(string a, long long b, long long m){
	long long coso = chiadu(a, m);
	long long dapan;
	dapan = somu(coso, b, m);
	cout << dapan << endl;
}
int main(){
	int test;
	cin >> test;
	
	while(test--){
		string a;
		long long b,m;
		cin >> a >> b >> m;
		solve(a, b, m);
	}
	return 0;
}



