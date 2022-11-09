#include <iostream>
#include <cmath>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

bool snt(long n){
	if(n < 2) return false;
	for(long i = 2; i <= sqrt(n); i++){
		if(n % i == 0) return false;
	}
	return true;
}
int main() {
	long a, b;
		cin >> a;
		cin >> b;
		if(a > b){
			long temp = a;
			a = b;
			b = temp;
		}
		for(long i = a; i <= b; i++){
			if(snt(i)) cout << i << " ";
		}
		cout << endl;
	return 0;
}
