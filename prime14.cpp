#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool snt(long n){
	if(n == 2 || n == 3) return true;
	for(long i = 2; i < n; i++){
		if(n % i == 0) return false;
	}
	return true;
}
long binhphuong(int n){
	return n * n;
}
void bauocso(int n){
	if(n < 4){
		cout << endl;
		return;
	}
	for(int i = 2; ; i++){
		if(binhphuong(i) > n){
			break;
		}
		long temp = binhphuong(i);
		if(snt(i)) cout << temp << " ";
	}
	cout << endl;
}
int main() {
	int test;
	long n;
	cin >> test;
	while(test--){
		cin >> n;
		bauocso(n);
	}
	return 0;
}
