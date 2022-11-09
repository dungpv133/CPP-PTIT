#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

long finds(int n, long long k){
	long sum = 0;
	for(int i = 1; i <= n; i++){
		if(i % k == 0)
			continue;
		else{
			sum += i % k;
		}
	}
	return sum;
}
int main(int argc, char** argv) {
	int test, n;
	long long k;
	cin >> test;
	while(test--){
		cin >> n >> k;
		cout << finds(n, k) << endl;
	}
	return 0;
}
