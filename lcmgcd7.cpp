#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long gcd(long long a, long long b){
	long long temp;
	while(b != 0){
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
long long lcm(long long a, long long b){
	return a * b / gcd(a, b);
}
int main(int argc, char** argv) {
	int test, n;
	long long x, y, z;
	cin >> test;
	while(test--){
		cin >> x >> y >> z >> n;
		long long t = lcm(x, y);
		long long bcnn = lcm(t, z);
		long long min = pow(10, n - 1);
		long long temp = min / bcnn;
		for(long long i = temp; ; i++){
			if(i * bcnn >= min){
				if(i * bcnn >= min * 10){
					cout << "-1\n";
					break;
				}
					cout << i * bcnn << endl;
					break;
			}
		}
	}
	return 0;
}
