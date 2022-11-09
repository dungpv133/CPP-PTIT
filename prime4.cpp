#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool snt(int n){
	if(n < 2 )
		return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
	return true;
}
int uocnt(int n){
	if(n == 1)
		return 1;
	if(n % 2 == 0)
		return 2;
	if(snt(n))
		return n;
	for(int i = 3; i <= sqrt(n); i++){
		if(n % i == 0)
			return i;
	}
	return sqrt(n);
}
int main(int argc, char** argv) {
	int test, n;
	cin >> test;
	while(test--){
		cin >> n;
		for(int i = 1; i <= n; i++){
			cout << uocnt(i) << " ";
		}
		cout << endl;
	}
	return 0;
}
