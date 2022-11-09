#include <iostream>
#include <cmath>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int gcd(int a, int b){
	int temp;
	while(b != 0){
		temp = a % b;
		a = b;
		b = temp;
	}
	return a;
}
bool snt(int n){
	if(n < 2)
		return false;
	for(int i = 2; i <= sqrt(n); i++){
		if(n % i == 0)
			return false;
	}
	return true;
}
int main(int argc, char** argv) {
	int test, n;
	cin >> test;
	while(test--){
		cin >> n;
		int count = 0;
		for(int i = 1; i < n; i++){
			if(gcd(n, i) == 1)
				count++;
		}
		if(snt(count))
			cout << "1" << endl;
		else
			cout << "0" << endl;
	}
	return 0;
}
