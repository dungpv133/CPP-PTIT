#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
long long m = 1e9 + 7;
long long fibo[1009];
int main(int argc, char** argv) {
	long long n, test;
	cin >> test;
	fibo[0] = 0;
	fibo[1] = 1;
	for(int i = 2; i <= 1000; i++){
		fibo[i] = fibo[i - 1] + fibo[i - 2];
		fibo[i] %= m;
	}
	while(test--){
		cin >> n;
		cout << fibo[n] << endl;
		
	}
	return 0;
}
