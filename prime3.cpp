#include <iostream>
#include <cmath>
using namespace std;

void uocsnt(long long n) {
	long long max = 0;
	for (int i = 2; i <= sqrt(n); i++) {
		if(n % i == 0 && i > max) max = i;
		while (n % i == 0) {
			n /= i;
		}
	}
	if (n != 1) max = n;
	cout << max << endl;
}
int main() {
	long long n;
	int test;
	cin >> test;
	while(test--){
		cin >> n;
		uocsnt(n);
	}
	return 0;
}
