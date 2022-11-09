#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void chia(int n){
	if(n == 1){
		cout << "1" << endl;
		return;
	}
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0){
			int count = 0;
			while(n % i == 0){
				count++;
				n /= i;
			}
			cout << i << " " << count << " ";
		}
	}
	if(n != 1) cout << n << " 1 " << endl;
	else cout << endl;
}
int main() {
	int test, n;
	cin >> test;
	while(test--){
		cin >> n;
		chia(n);
	}
	return 0;
}
