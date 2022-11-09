#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int chia(int n, int k){
	int i, stt = 0, snt = -1;
	if(n == 1 && k == 1){
		return snt;
	}
	for(i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			while(n % i == 0){
				stt++;
				n /= i;
				if(stt == k){
					snt = i;
					return snt;
				}
			}
		}
		if(snt > 0) break;
	}
	if(n != 1 && stt == k - 1){
			snt = n;
		}
	return snt;
}
int main() {
	int test, n, k;
	cin >> test;
	while(test--){
		cin >> n;
		cin >> k;
		cout << chia(n, k) << endl;
	}
	return 0;
}
