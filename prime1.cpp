#include <iostream>
#include <cmath>
using namespace std;

void chia(long long n) {
	for (int i = 2; i <= sqrt(n); i++) {
		while (n % i == 0) {
			cout << i << " ";
			n /= i;
		}
	}
	if (n != 1) cout << n << "\n";
	else cout << "\n";
}
int main() {
	long long n;
	int test;
	cin >> test;
	while(test--){
		cin >> n;
		chia(n);
	}
	return 0;
}
