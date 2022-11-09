#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long long power(long long a, long long b, long long c){
	if(b == 0) return 1;
	long long x = power(a, b / 2, c);
	if(b % 2 == 0)
		return x * x % c;
		return a * (x * x % c) % c;
}
int main(int argc, char** argv) {
	int test;
	long long x, y, p;
	cin >> test;
	while(test--){
		cin >> x >> y >> p;
		cout << power(x, y, p) << endl;
	}
	return 0;
}
